#!/bin/bash

# RWP*Load Simulator - generate the top level Makefile
# and the Makefile in rwl/src


fail=2
if test -f Makefile
then
  echo Makefile already exists, please remove or rename 1>&2
  exit $fail
fi

if test -f rwl/src/Makefile
then
  echo rwl/src/Makefile already exists, please remove or rename 1>&2
  exit $fail
fi

echo -n "Please enter your primary development release [11/12/18/19/20]: "
read primary

case $primary in
  11|12|18|19|20)
    ;;
  *)
    echo Development release must be one of 11, 12, 18, 19, 20
    exit $fail
    ;;
esac

echo -n "Please enter either ORACLE_HOME or top of instant client for release $primary: "
read phome

fail=1

if test -f $phome/sdk/include/oci.h 
then
  echo $phome identified as Instant Client
  oracle_lib=$phome
  oracle_include=$phome/sdk/include
  fail=0
fi

if test -f $phome/rdbms/public/oci.h
then
  echo $phome identified as ordinary ORACLE_HOME
  oracle_lib=$phome/lib
  oracle_include=$phome/rdbms/public
  fail=0
fi

if test $fail -gt 0
then
  echo Cannot find oci.h as expected in $phome 1>&2
  exit $fail
fi

cat > Makefile <<END
# Make just the release that is our main building release
# and also increase the patch level by 1
#
# If you need to change this file, please change makemake.sh
# accordingly
only: 
	(cd rwl/src; ./rwlpatch.sh; make MAJOR_VERSION=$primary ORACLE_LIB=$oracle_lib ORACLE_INCLUDE=$oracle_include)

# Make all the other releases, documentation, etc
all: only
END

cat > rwl/src/Makefile <<END
#
# There are these three fundamental variables
# that are being overwritten when compiling
# for anything but the default version
MAJOR_VERSION=$primary
ORACLE_LIB=$oracle_lib
ORACLE_INCLUDE=$oracle_include
#
# If you need to change this file, please change makemake.sh
# accordingly
#
END
cat >> rwl/src/Makefile <<'END'

# List of all object files, rwlpatch.o is generic for 
# all versions, the rest are compiled for each client
# version seperately in separate directories
RWLOBJECTS = rwlpatch.o \
  obj$(MAJOR_VERSION)/rwlparser.tab.o \
  obj$(MAJOR_VERSION)/rwldiprs.tab.o \
  obj$(MAJOR_VERSION)/lex.rwlz.o \
  obj$(MAJOR_VERSION)/lex.rwla.o \
  obj$(MAJOR_VERSION)/lex.rwly.o \
  obj$(MAJOR_VERSION)/rwlerror.o \
  obj$(MAJOR_VERSION)/rwlmain.o \
  obj$(MAJOR_VERSION)/rwlvariable.o \
  obj$(MAJOR_VERSION)/rwlexprcomp.o \
  obj$(MAJOR_VERSION)/rwlexpreval.o \
  obj$(MAJOR_VERSION)/rwlcodeadd.o \
  obj$(MAJOR_VERSION)/rwlcoderun.o \
  obj$(MAJOR_VERSION)/rwlrast.o \
  obj$(MAJOR_VERSION)/rwldynsql.o \
  obj$(MAJOR_VERSION)/rwlsql.o \
  obj$(MAJOR_VERSION)/rwlmisc.o 


# List of generated files
GENFILES=rwlparser.tab.c lex.rwly.c rwlparser.tab.h rwlparser.y rwldiprs.tab.c rwldiprs.tab.h lex.rwlz.c lex.rwla.c

# List of files concatenated to become the parser input
YFILES=rwlheader.y rwldeclaration.yi  rwlexpression.yi  rwlstatement.yi  rwlthreads.yi

# List of all source files
RWLSOURCES = rwl.h \
  rwlerror.h \
  rwlcodeadd.c \
  rwlcoderun.c \
  rwlerror.c \
  rwlexprcomp.c \
  rwlexpreval.c \
  rwllexer.l \
  rwlmain.c \
  rwlrast.c \
  rwldynsql.c \
  rwlsql.c \
  rwlvariable.c \
  rwlmisc.c \
  $(YFILES) \
  rwldiprs.y \
  rwldilex.l \
  rwlarglex.l \
  rwlport.h \
  rwltypedefs.h

# Change this if you want debugging
GCC_O=-O3 
# GCC_O=-O0 -g

# We set all variables and don't use any of those
# already existing in make
GCC=gcc
# Used by all
GCCFLAGSALL=-m64

OCI_LIBS=-L$(ORACLE_LIB) -lclntsh

# Different flags are needed for pure and generated C files
MYGCCFLAGSC = $(GCCALLFLAGS) $(GCC_O) -W -Wall -Wextra -Wconversion
MYGCCFLAGSY = $(GCCALLFLAGS) $(GCC_O) -W -Wall -Wextra 
MYGCCFLAGSL = $(GCCALLFLAGS) $(GCC_O) -W -Wall -Wextra -Wno-unused-parameter -Wno-sign-compare

GCCFLAGSC = $(GCCFLAGSALL) -D RWL_GCCFLAGS='$(MYGCCFLAGSC)'
GCCFLAGSY = $(MYGCCFLAGSY) -D RWL_GCCFLAGS='$(MYGCCFLAGSY)'
GCCFLAGSL = $(MYGCCFLAGSL) -D RWL_GCCFLAGS='$(MYGCCFLAGSL)'

FLEX=flex

BISON=bison
BISONFLAGS=-Wno-deprecated

only: ../../bin/rwloadsim$(MAJOR_VERSION) ../../bin/rwloadsim

ctags: $(RWLSOURCES)
	rm -f tags cscope.out
	chmod 000 rwltypedefs.h # Make sure tags doesn't bring us here
	ctags --c-kinds=-t $(RWLSOURCES) 
	cscope -b -c $(RWLSOURCES) 
	chmod 644 rwltypedefs.h
	chmod ugo-w tags cscope.out # prevent inadvertent updates

# The full parser:
obj$(MAJOR_VERSION)/rwlparser.tab.o: rwlparser.tab.c
	$(GCC) -c $(GCCFLAGSY) -I$(ORACLE_INCLUDE) rwlparser.tab.c -o obj$(MAJOR_VERSION)/rwlparser.tab.o

rwlparser.tab.h rwlparser.tab.c: rwlparser.y rwl.h rwlerror.h
	$(BISON) $(BISONFLAGS) -v -d rwlparser.y

rwlparser.y: $(YFILES)
	@rm -f rwlparser.y
	@echo '/* THIS IS A GENERATED FILE - DO NOT EDIT */' > rwlparser.y
	cat $(YFILES) >> rwlparser.y
	@chmod 444 rwlparser.y

# The parser for $if $then directive 
obj$(MAJOR_VERSION)/rwldiprs.tab.o: rwldiprs.tab.c
	$(GCC) -c $(GCCFLAGSY) -I$(ORACLE_INCLUDE) rwldiprs.tab.c -o obj$(MAJOR_VERSION)/rwldiprs.tab.o

rwldiprs.tab.h rwldiprs.tab.c: rwldiprs.y rwl.h rwlerror.h
	$(BISON) $(BISONFLAGS) -v -d rwldiprs.y

# The ordinary lexer
obj$(MAJOR_VERSION)/lex.rwly.o: lex.rwly.c 
	$(GCC) -c $(GCCFLAGSL) -I$(ORACLE_INCLUDE) lex.rwly.c -o obj$(MAJOR_VERSION)/lex.rwly.o

lex.rwly.c: rwllexer.l rwl.h rwlerror.h rwlparser.tab.h
	$(FLEX) --prefix=rwly rwllexer.l

# The lexer for $if $then directive
obj$(MAJOR_VERSION)/lex.rwlz.o: lex.rwlz.c 
	$(GCC) -c $(GCCFLAGSL) -I$(ORACLE_INCLUDE) lex.rwlz.c -o obj$(MAJOR_VERSION)/lex.rwlz.o

lex.rwlz.c: rwldilex.l rwl.h rwlerror.h rwldiprs.tab.h
	$(FLEX) --prefix=rwlz rwldilex.l

# The lexer for scanning first file for option directives
obj$(MAJOR_VERSION)/lex.rwla.o: lex.rwla.c 
	$(GCC) -c $(GCCFLAGSL) -I$(ORACLE_INCLUDE) lex.rwla.c -o obj$(MAJOR_VERSION)/lex.rwla.o

lex.rwla.c: rwlarglex.l rwl.h rwlerror.h rwldiprs.tab.h
	$(FLEX) --prefix=rwla rwlarglex.l
# All the normal object files
obj$(MAJOR_VERSION)/rwlmain.o: rwlmain.c 
	$(GCC) -c $(GCCFLAGSC) -I$(ORACLE_INCLUDE) -o obj$(MAJOR_VERSION)/rwlmain.o rwlmain.c
obj$(MAJOR_VERSION)/rwlcoderun.o: rwlcoderun.c 
	$(GCC) -c $(GCCFLAGSC) -I$(ORACLE_INCLUDE) -o obj$(MAJOR_VERSION)/rwlcoderun.o rwlcoderun.c
obj$(MAJOR_VERSION)/rwlerror.o: rwlerror.c 
	$(GCC) -c $(GCCFLAGSC) -I$(ORACLE_INCLUDE) -o obj$(MAJOR_VERSION)/rwlerror.o rwlerror.c
obj$(MAJOR_VERSION)/rwlexprcomp.o: rwlexprcomp.c 
	$(GCC) -c $(GCCFLAGSC) -I$(ORACLE_INCLUDE) -o obj$(MAJOR_VERSION)/rwlexprcomp.o rwlexprcomp.c
obj$(MAJOR_VERSION)/rwlexpreval.o: rwlexpreval.c 
	$(GCC) -c $(GCCFLAGSC) -I$(ORACLE_INCLUDE) -o obj$(MAJOR_VERSION)/rwlexpreval.o rwlexpreval.c
obj$(MAJOR_VERSION)/rwlrast.o: rwlrast.c 
	$(GCC) -c $(GCCFLAGSC) -I$(ORACLE_INCLUDE) -o obj$(MAJOR_VERSION)/rwlrast.o rwlrast.c
obj$(MAJOR_VERSION)/rwldynsql.o: rwldynsql.c 
	$(GCC) -c $(GCCFLAGSC) -I$(ORACLE_INCLUDE) -o obj$(MAJOR_VERSION)/rwldynsql.o rwldynsql.c
obj$(MAJOR_VERSION)/rwlsql.o: rwlsql.c 
	$(GCC) -c $(GCCFLAGSC) -I$(ORACLE_INCLUDE) -o obj$(MAJOR_VERSION)/rwlsql.o rwlsql.c
obj$(MAJOR_VERSION)/rwlvariable.o: rwlvariable.c 
	$(GCC) -c $(GCCFLAGSC) -I$(ORACLE_INCLUDE) -o obj$(MAJOR_VERSION)/rwlvariable.o rwlvariable.c
obj$(MAJOR_VERSION)/rwlmisc.o: rwlmisc.c 
	$(GCC) -c $(GCCFLAGSC) -I$(ORACLE_INCLUDE) -o obj$(MAJOR_VERSION)/rwlmisc.o rwlmisc.c
obj$(MAJOR_VERSION)/rwlcodeadd.o: rwlcodeadd.c 
	$(GCC) -c $(GCCFLAGSC) -I$(ORACLE_INCLUDE) -o obj$(MAJOR_VERSION)/rwlcodeadd.o rwlcodeadd.c
rwlpatch.o: rwlpatch.c 
	$(GCC) -c $(GCCFLAGSC) -I$(ORACLE_INCLUDE) -o rwlpatch.o rwlpatch.c


../../bin/rwloadsim$(MAJOR_VERSION): $(RWLOBJECTS) 
	env LD_LIBRARY_PATH=$(ORACLE_LIB) $(GCC) $(GCCFLAGS) -o ../../bin/rwloadsim$(MAJOR_VERSION) $(RWLOBJECTS) $(OCI_LIBS) -lm -lrt

clean:
	rm -f $(RWLOBJECTS) $(GENFILES) ../../bin/rwloadsim$(MAJOR_VERSION)

$(RWLOBJECTS): rwl.h rwlerror.h

.SUFFIXES:	.i
.c.i:
	$(GCC) -E -I$(ORACLE_INCLUDE) -D RWL_GCCFLAGS='-I -E' $< > $*.i

sources: $(RWLSOURCES)
	@echo $(RWLSOURCES)

../../bin/rwloadsim: rwloadsim.sh
	cp -f rwloadsim.sh ../../bin/rwloadsim
	chmod 755 ../../bin/rwloadsim

END


secondary=nothing
until test -z "$secondary"
do
  
  echo -n "Please enter a secondary development release, return for none/no more : "
  read secondary

  if test x$secondary = x$primary
  then
    echo Secondary is the same as the primary
  else

    case $secondary in
      11|12|18|19|20)

	echo -n "Please enter either ORACLE_HOME or top of instant client for release $secondary: "
	read shome

	fail=3
	if test -f $shome/sdk/include/oci.h 
	then
	  echo $shome identified as Instant Client
	  oracle_lib=$shome
	  oracle_include=$shome/sdk/include
	  fail=0
	fi

	if test -f $shome/rdbms/public/oci.h
	then
	  echo $shome identified as ordinary ORACLE_HOME
	  oracle_lib=$shome/lib
	  oracle_include=$shome/rdbms/public
	  fail=0
	fi

	if test $fail -gt 0
	then
	  echo Cannot find oci.h as expected in $shome 
	else
	  echo -e "\t(cd rwl/src; make MAJOR_VERSION=$secondary ORACLE_LIB=$oracle_lib ORACLE_INCLUDE=$oracle_include)" >> Makefile
	fi
	;;

      ?*)
	echo Secondary release must be one of 11, 12, 18, 19, 20
	;;
    esac
  fi
done


cat >> Makefile <<END

# Run the test shell script
test: only
	(cd rwl/test; sh test.sh -e)

# Prepare the tgz file for shipping
ship: all
	sh makeship.sh

END

echo Makefiles have been created, you can type make now