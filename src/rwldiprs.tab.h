/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_RWLZ_RWLDIPRS_TAB_H_INCLUDED
# define YY_RWLZ_RWLDIPRS_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef RWLZDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define RWLZDEBUG 1
#  else
#   define RWLZDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define RWLZDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined RWLZDEBUG */
#if RWLZDEBUG
extern int rwlzdebug;
#endif

/* Token type.  */
#ifndef RWLZTOKENTYPE
# define RWLZTOKENTYPE
  enum rwlztokentype
  {
    RWL_Z_LESSEQ = 258,
    RWL_Z_GREATEQ = 259,
    RWL_Z_NOTEQ = 260,
    RWL_Z_AND = 261,
    RWL_Z_OR = 262,
    RWL_Z_BETWEEN = 263,
    RWL_Z_CONCAT = 264,
    RWL_Z_ASSIGN = 265,
    RWL_Z_NULL = 266,
    RWL_Z_IS = 267,
    RWL_Z_NOT = 268,
    RWL_Z_DEFINED = 269,
    RWL_Z_ACCESS = 270,
    RWL_Z_DATABASE = 271,
    RWL_Z_DOUBLE_CONST = 272,
    RWL_Z_STRING_CONST = 273,
    RWL_Z_IDENTIFIER = 274,
    RWL_Z_INTEGER_CONST = 275,
    RWL_Z_DEFAULT = 276,
    RWL_Z_UMINUS = 277
  };
#endif

/* Value type.  */
#if ! defined RWLZSTYPE && ! defined RWLZSTYPE_IS_DECLARED

union RWLZSTYPE
{
#line 65 "rwldiprs.y" /* yacc.c:1909  */

	/* this must be declared as it is ifdef'ed as YYSTYPE
	** but we never actually use it as the lexer sets
	** apropriate fields in rwm, which it gets as argument
	*/
	void	*rwl_never_used;

#line 93 "rwldiprs.tab.h" /* yacc.c:1909  */
};

typedef union RWLZSTYPE RWLZSTYPE;
# define RWLZSTYPE_IS_TRIVIAL 1
# define RWLZSTYPE_IS_DECLARED 1
#endif



int rwlzparse (rwl_main *rwm);

#endif /* !YY_RWLZ_RWLDIPRS_TAB_H_INCLUDED  */
