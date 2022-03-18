/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2022 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator parser
 *
 * rwldirif.y - parser for $if: directive
 *
 * History
 *
 * bengsig  17-mar-2022 - Name parser rwlzparse for better ctags
 * bengsig  21-feb-2022 - Implicit bind and define
 * bengsig  08-apr-2021 - Add constants rwl_zero, etc
 * bengsig  18-feb-2021 - Use bison 3 syntax (which desupports 2)
 * bengsig  05-jan-2021 - No short circuit
 * bengsig  01-sep-2020 - Improve tags value by rename with z
 * bengsig  28-aug-2020 - Use zinam
 * bengsig  24-feb-2020 - Add access function
 * bengsig  22-aug-2019 - Creation
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
// see comments in rwlheader.y
//#define YYERROR_VERBOSE 1
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

%}

// don't use global variables!
%define api.pure full
// don't use the yy name 
%define api.prefix {rwlz}
// here's our top structure as argument to the parser
%parse-param {rwl_main *rwm}
%lex-param {void *rwlzrwmscanner}
%define parse.error verbose
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
%token RWL_Z_LESSEQ RWL_Z_GREATEQ RWL_Z_NOTEQ RWL_Z_AND RWL_Z_OR RWL_Z_BETWEEN RWL_Z_CONCAT
%token RWL_Z_ASSIGN RWL_Z_NULL RWL_Z_IS RWL_Z_NOT RWL_Z_DEFINED RWL_Z_ACCESS
%token RWL_Z_DOUBLE_CONST RWL_Z_STRING_CONST RWL_Z_IDENTIFIER RWL_Z_INTEGER_CONST 


// standard order of association
%left RWL_Z_CONCAT
%left RWL_Z_OR
%left RWL_Z_AND
%left '=' RWL_Z_NOTEQ
%left '<' '>' RWL_Z_LESSEQ RWL_Z_GREATEQ RWL_Z_BETWEEN
%left '-' '+'
%left '*' '/' '%'
%left '!' RWL_Z_NOT RWL_Z_UMINUS

%start rwlzparse
%%

rwlzparse:
	 expressionz ';'
	    {
	      rwl_estack *estk;
	      if ((estk = rwlexprfinish(rwm)))
	      {
		// We got a proper $if:() 
		rwlexpreval(estk, &rwm->loc, rwm->mxq, &rwm->pval);
		// Check not too deep
		if (rwm->ifdirdep>RWL_MAX_IFDD)
		  rwlsevere(rwm,"[rwldiprs-toodeep:%x:%d]",rwm->ifdirdep, rwm->ifdirbit);
		else
		{
		  // set the appropriate bit if it is false
		  if (!rwm->pval.ival)
		    bis(rwm->ifdirbit, (1<<rwm->ifdirdep));
		}
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
	      rwlsevere(rwm,"[rwldiprs-toodeep2:%x:%d]",rwm->ifdirdep, rwm->ifdirbit);
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
	  

identifier_or_constantz:
	RWL_Z_IDENTIFIER		
	    {
	      rwlexprpush(rwm, rwm->zinam, RWL_STACK_VAR);
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
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
	| RWL_Z_ACCESS '(' concatenationz ',' expressionz ')'
	  { rwlexprpush(rwm,0,RWL_STACK_ACCESS); }
	| RWL_Z_DEFINED '(' RWL_Z_IDENTIFIER ')'
	  {
	    // just see if variable exists and put 0 or 1 to stack
	    sb4 l;
	    char buf[RWL_PFBUF];
	    rwl_value num;

	    bis(rwm->mxq->tflags, RWL_P_FINDVAR_NOERR);
	    l = rwlfindvar(rwm->mxq, rwm->zinam, RWL_VAR_NOGUESS);
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
	| '(' expressionz ')'
	;
	
primary_expressionz:
	identifier_or_constantz
	| identifier_or_constantz RWL_Z_IS RWL_Z_NULL { rwlexprpush(rwm,0,RWL_STACK_ISNULL); }
	| identifier_or_constantz RWL_Z_IS RWL_Z_NOT RWL_Z_NULL { rwlexprpush(rwm,0,RWL_STACK_ISNOTNULL); }


unary_expressionz:
	primary_expressionz
	| '-' multiplicationz %prec RWL_Z_UMINUS	{ rwlexprpush(rwm,0,RWL_STACK_MINUS); }
	| '!' multiplicationz	{ rwlexprpush(rwm,0,RWL_STACK_NOT); }
	| RWL_Z_NOT multiplicationz	{ rwlexprpush(rwm,0,RWL_STACK_NOT); }
	;

multiplicationz:
	unary_expressionz
	| multiplicationz '*' unary_expressionz { rwlexprpush(rwm,0,RWL_STACK_MUL); }
	| multiplicationz '/' unary_expressionz { rwlexprpush(rwm,0,RWL_STACK_DIV); }
	| multiplicationz '%' unary_expressionz { rwlexprpush(rwm,0,RWL_STACK_MOD); }
	;

additionz:
	multiplicationz	
	| additionz '+' multiplicationz { rwlexprpush(rwm,0,RWL_STACK_ADD); }
	| additionz '-' multiplicationz { rwlexprpush(rwm,0,RWL_STACK_SUB); }
	;

comparisonz:
	additionz
	| comparisonz '<' additionz { rwlexprpush(rwm,0,RWL_STACK_LESS); }
	| comparisonz '>' additionz { rwlexprpush(rwm,0,RWL_STACK_GREATER); }
	| comparisonz RWL_Z_LESSEQ additionz { rwlexprpush(rwm,0,RWL_STACK_LESSEQ); }
	| comparisonz RWL_Z_GREATEQ additionz { rwlexprpush(rwm,0,RWL_STACK_GREATEREQ); }
	| comparisonz RWL_Z_BETWEEN additionz RWL_Z_AND additionz { rwlexprpush(rwm,0,RWL_STACK_BETWEEN); }
	;

equalityz:
	comparisonz
	| equalityz '=' comparisonz { rwlexprpush(rwm,0,RWL_STACK_EQUAL); }
	| equalityz RWL_Z_NOTEQ comparisonz { rwlexprpush(rwm,0,RWL_STACK_NOTEQUAL); }
	;

logicalandz:
	equalityz 
	| logicalandz RWL_Z_AND equalityz 
	  { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, 0 );
	  }
	;

logicalorz:
	logicalandz
	| logicalorz RWL_Z_OR logicalandz
	  { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR , 0 );
	  }
	;

conditionalz:
	logicalorz
	| logicalorz '?' 
	  conditionalz ':'
	  conditionalz 
	  {  
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, 0 );
	  }
	;

expressionz:
	conditionalz
	| expressionz RWL_Z_CONCAT conditionalz { rwlexprpush(rwm,0,RWL_STACK_CONCAT); }
	;

concatenationz:
	expressionz
	| expressionz concatenationz { rwlexprpush(rwm,0,RWL_STACK_CONCAT); }
	;

