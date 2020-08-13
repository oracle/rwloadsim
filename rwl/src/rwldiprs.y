/*
 * Real World performance Load simulator parser
 *
 * rwldirif.y - parser for $if: directive
 *
 * History
 *
 * bengsig 24-feb-20 - Add access function
 * bengsig 22-aug-19 - Creation
 */


%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>
#include "rwl.h"

/*
  rwm is an argument to rwlzparse
*/
#define YYERROR_VERBOSE 1
#define rwlzrwmscanner rwm->rwlzscanner

static void rwlzerror(rwl_main *rwm, const char *s) 
{
/* print the error text that was givin at an 'error' syntax element */
if (bit(rwm->mflags, RWL_DEBUG_PRINTYYERR))
  rwldebug(rwm, "rwlzerror %s", s);
/* mark error line as soon as error is found */
rwm->loc.errlin = rwm->loc.lineno; 
}

rwlcomp(rwldiprs_y, RWL_GCCFLAGS)

// these are needed due to issues with bison
// not doing this when %name-prefix is set
#define yychar rwlzchar

%}
// Configuration

// don't use global variables!
%pure-parser
// don't use the yy name - ignore warning in pre2.6 bison
%name-prefix = "rwlz"
//%define api.prefix {rwlz}
// here's our top structure as argumentto the parser
%parse-param {rwl_main *rwm}
%lex-param {void *rwlzrwmscanner}
%expect 1


%union
{
	/* this must be declared as it is ifdef'ed as YYSTYPE
	** but we never actually use it as the lexer sets
	** apropriate fields in rwm, which it gets as argument
	*/
	void	*rwl_never_used;
};


// The tokens
%token RWL_Z_ASSIGN RWL_Z_NULL RWL_Z_IS RWL_Z_NOT
%token RWL_Z_LESSEQ RWL_Z_GREATEQ RWL_Z_NOTEQ RWL_Z_AND RWL_Z_OR RWL_Z_BETWEEN RWL_Z_CONCAT
%token RWL_Z_DEFINED RWL_Z_ACCESS

%token <sval> RWL_Z_STRING_CONST
%token <sval> RWL_Z_IDENTIFIER
%token <ival> RWL_Z_INTEGER_CONST
%token <dval> RWL_Z_DOUBLE_CONST

// standard order of association
%left RWL_Z_CONCAT
%left RWL_Z_OR
%left RWL_Z_AND
%left '=' RWL_Z_NOTEQ
%left '<' '>' RWL_Z_LESSEQ RWL_Z_GREATEQ RWL_Z_BETWEEN
%left '-' '+'
%left '*' '/' '%'
%left '!' RWL_Z_NOT RWL_Z_UMINUS

%start exprandsemi
%%

exprandsemi:
	 expression ';'
	    {
	      rwl_estack *estk;
	      if ((estk = rwlexprfinish(rwm)))
	      {
		// We got a proper $if:() 
		rwlexpreval(estk, &rwm->loc, rwm->mxq, &rwm->pval);
		// Check not too deep
		if (rwm->ifdirdep>RWL_MAX_IFDD)
		  rwlsevere(rwm,"[$if:()toodeep:%x:%d]",rwm->ifdirdep, rwm->ifdirbit);
		else
		{
		  // set the appropriate bit if it is false
		  if (!rwm->pval.ival)
		    bis(rwm->ifdirbit, (1<<rwm->ifdirdep));
		}
		if (bit(rwm->mflags, RWL_DEBUG_MISC))
		  rwldebug(rwm, "$if:() %d %d %x"
		    , rwm->pval.ival
		    , rwm->ifdirdep, rwm->ifdirbit);
		if (!rwm->ifdirdep)
		{
		  // save where top $if is
		  memcpy(&rwm->ifdirloc, &rwm->loc, sizeof(rwl_location));
		}
		rwm->ifdirdep++;
		rwlexprdestroy(rwm, estk);
	      }
	    }
	| error ';'
	  {
	    // $if was ok, but the expression was not
	    // Check not too deep
	    if (rwm->ifdirdep>RWL_MAX_IFDD)
	      rwlsevere(rwm,"[$if:()toodeep:%x:%d]",rwm->ifdirdep, rwm->ifdirbit);
	    else
	    {
	      // assume false
	      bis(rwm->ifdirbit, (1<<rwm->ifdirdep));
	    }
	    if (!rwm->ifdirdep)
	    {
	      // save where top $if is
	      memcpy(&rwm->ifdirloc, &rwm->loc, sizeof(rwl_location));
	    }
	    rwm->ifdirdep++;
	    // and report error
	    rwlerror(rwm, RWL_ERROR_DOLLARIF_NO_VALID_EXPRESSION);
	    rwlexprclear(rwm);
	  }
	  

identifier_or_constant:
	RWL_Z_IDENTIFIER		
	    {
	      rwlexprpush(rwm, rwm->inam, RWL_STACK_VAR);
	    }

	| RWL_Z_DOUBLE_CONST		
	    {
	      char buf[RWL_PFBUF];
	      rwl_value num;
	      num.dval = rwm->dval;
	      num.ival = (sb4) round(rwm->dval);
	      num.isnull = 0;
	      snprintf(buf, RWL_PFBUF-1, rwm->dformat, num.dval);
	      num.sval = rwlstrdup(rwm, (text *)buf);
	      num.slen = strlen(buf)+1;
	      num.vsalloc = RWL_SVALLOC_FIX;
	      num.vtype = RWL_TYPE_DBL;
	      rwlexprpush(rwm, &num, RWL_STACK_NUM);
	    }
	| RWL_Z_INTEGER_CONST	
	    {
	      char buf[RWL_PFBUF];
	      rwl_value num;
	      num.ival = rwm->ival;
	      num.dval = (double) rwm->ival;
	      num.isnull = 0;
	      snprintf(buf, RWL_PFBUF, rwm->iformat, num.ival);
	      num.sval = rwlstrdup(rwm, (text *)buf);
	      num.slen = strlen(buf)+1;
	      num.vsalloc = RWL_SVALLOC_FIX;
	      num.vtype = RWL_TYPE_INT;
	      rwlexprpush(rwm, &num, RWL_STACK_NUM);
	    }
	| RWL_Z_STRING_CONST	
	    {
	      rwl_value num;
	      num.sval = rwm->sval; /* no strdup as RWL_T_STRING_CONST from lexer already is strdup'ed */
	      num.vsalloc = RWL_SVALLOC_CONST;
	      num.slen = rwlstrlen(num.sval)+1;
	      num.ival = rwlatosb8(num.sval);
	      num.dval = rwlatof(num.sval);
	      num.isnull = 0;
	      num.vtype = RWL_TYPE_STR;
	      rwlexprpush(rwm, &num, RWL_STACK_NUM);
	    }
	| RWL_Z_NULL	
	    {
	      rwl_value num;
	      num.sval = (text *)"";
	      num.vsalloc = RWL_SVALLOC_CONST;
	      num.slen = rwlstrlen(num.sval)+1;
	      num.ival = 0;
	      num.dval = 0.0;
	      num.isnull = RWL_ISNULL;
	      num.vtype = RWL_TYPE_STR;
	      rwlexprpush(rwm, &num, RWL_STACK_NUM);
	    }
	| RWL_Z_ACCESS '(' concatenation ',' expression ')'
	  { rwlexprpush(rwm,0,RWL_STACK_ACCESS); }
	| RWL_Z_DEFINED '(' RWL_Z_IDENTIFIER ')'
	  {
	    // just see if variable exists and put 0 or 1 to stack
	    sb4 l;
	    char buf[RWL_PFBUF];
	    rwl_value num;

	    bis(rwm->mxq->tflags, RWL_P_FINDVAR_NOERR);
	    l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
	    bic(rwm->mxq->tflags, RWL_P_FINDVAR_NOERR);

	    num.ival = (l>=0);
	    num.dval = (double) rwm->ival;
	    num.isnull = 0;
	    snprintf(buf, RWL_PFBUF, rwm->iformat, num.ival);
	    num.sval = rwlstrdup(rwm, (text *)buf);
	    num.slen = strlen(buf)+1;
	    num.vsalloc = RWL_SVALLOC_FIX;
	    num.vtype = RWL_TYPE_INT;
	    rwlexprpush(rwm, &num, RWL_STACK_NUM);
	  }
	| '(' expression ')'
	;
	
primary_expression:
	identifier_or_constant
	| identifier_or_constant RWL_Z_IS RWL_Z_NULL { rwlexprpush(rwm,0,RWL_STACK_ISNULL); }
	| identifier_or_constant RWL_Z_IS RWL_Z_NOT RWL_Z_NULL { rwlexprpush(rwm,0,RWL_STACK_ISNOTNULL); }


unary_expression:
	primary_expression
	| '-' multiplication %prec RWL_Z_UMINUS	{ rwlexprpush(rwm,0,RWL_STACK_MINUS); }
	| '!' multiplication	{ rwlexprpush(rwm,0,RWL_STACK_NOT); }
	| RWL_Z_NOT multiplication	{ rwlexprpush(rwm,0,RWL_STACK_NOT); }
	;

multiplication:
	unary_expression
	| multiplication '*' unary_expression { rwlexprpush(rwm,0,RWL_STACK_MUL); }
	| multiplication '/' unary_expression { rwlexprpush(rwm,0,RWL_STACK_DIV); }
	| multiplication '%' unary_expression { rwlexprpush(rwm,0,RWL_STACK_MOD); }
	;

addition:
	multiplication	
	| addition '+' multiplication { rwlexprpush(rwm,0,RWL_STACK_ADD); }
	| addition '-' multiplication { rwlexprpush(rwm,0,RWL_STACK_SUB); }
	;

comparison:
	addition
	| comparison '<' addition { rwlexprpush(rwm,0,RWL_STACK_LESS); }
	| comparison '>' addition { rwlexprpush(rwm,0,RWL_STACK_GREATER); }
	| comparison RWL_Z_LESSEQ addition { rwlexprpush(rwm,0,RWL_STACK_LESSEQ); }
	| comparison RWL_Z_GREATEQ addition { rwlexprpush(rwm,0,RWL_STACK_GREATEREQ); }
	| comparison RWL_Z_BETWEEN addition RWL_Z_AND addition { rwlexprpush(rwm,0,RWL_STACK_BETWEEN); }
	;

equality:
	comparison
	| equality '=' comparison { rwlexprpush(rwm,0,RWL_STACK_EQUAL); }
	| equality RWL_Z_NOTEQ comparison { rwlexprpush(rwm,0,RWL_STACK_NOTEQUAL); }
	;

logicaland:
	equality 
	| logicaland RWL_Z_AND equality 
	  { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipnum);
	  }
	;

logicalor:
	logicaland
	| logicalor RWL_Z_OR logicaland
	  { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipnum);
	  }
	;

conditional:
	logicalor
	| logicalor '?' 
	  conditional ':'
	  conditional 
	  {  
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipnum);
	  }
	;

expression:
	conditional
	| expression RWL_Z_CONCAT conditional { rwlexprpush(rwm,0,RWL_STACK_CONCAT); }
	;

concatenation:
	expression
	| expression concatenation { rwlexprpush(rwm,0,RWL_STACK_CONCAT); }
	;

