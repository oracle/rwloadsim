set /p rwlpatch<rwlpatch.txt
set /a rwlpatch+=1
echo %rwlpatch% > rwlpatch.txt
echo unsigned int rwlpatch=%rwlpatch%; > rwlpatch.c
cl /c /Fo:winobj\rwlpatch.obj rwlpatch.c
cl /D YY_NO_UNISTD_H /c /Fo:winobj\lex.rwla.obj /I%1%\sdk\include lex.rwla.c
cl /D YY_NO_UNISTD_H /c /Fo:winobj\lex.rwly.obj /I%1%\sdk\include lex.rwly.c
cl /D YY_NO_UNISTD_H /c /Fo:winobj\lex.rwlz.obj /I%1%\sdk\include lex.rwlz.c
cl /c /Fo:winobj\rwlparser.tab.obj /I%1%\sdk\include rwlparser.tab.c
cl /c /Fo:winobj\rwldiprs.tab.obj /I%1%\sdk\include rwldiprs.tab.c
cl /c /Fo:winobj\rwlcodeadd.obj /I%1%\sdk\include rwlcodeadd.c
cl /c /Fo:winobj\rwlcoderun.obj /I%1%\sdk\include rwlcoderun.c
cl /c /Fo:winobj\rwldynsql.obj /I%1%\sdk\include rwldynsql.c
cl /c /Fo:winobj\rwlerror.obj /I%1%\sdk\include rwlerror.c
cl /c /Fo:winobj\rwlexprcomp.obj /I%1%\sdk\include rwlexprcomp.c
cl /c /Fo:winobj\rwlexpreval.obj /I%1%\sdk\include rwlexpreval.c
cl /c /Fo:winobj\rwlmain.obj /I%1%\sdk\include rwlmain.c
cl /D RWL_GEN_EXEC /c /Fo:winobj\rwlgenexec.obj /I%1%\sdk\include rwlmain.c
cl /c /Fo:winobj\rwlmainerror.obj /I%1%\sdk\include rwlmainerror.c
cl /c /Fo:winobj\rwlmisc.obj /I%1%\sdk\include rwlmisc.c
cl /c /Fo:winobj\rwlrast.obj /I%1%\sdk\include rwlrast.c
cl /c /Fo:winobj\rwlsql.obj /I%1%\sdk\include rwlsql.c
cl /c /Fo:winobj\rwlvariable.obj /I%1%\sdk\include rwlvariable.c
lib /OUT:..\lib\rwlgenmain.obj winobj\lex.rwla.obj winobj\lex.rwly.obj winobj\lex.rwlz.obj winobj\rwlparser.tab.obj winobj\rwldiprs.tab.obj winobj\rwlcodeadd.obj winobj\rwlcoderun.obj winobj\rwldynsql.obj winobj\rwlerror.obj winobj\rwlexprcomp.obj winobj\rwlexpreval.obj winobj\rwlgenexec.obj winobj\rwlmisc.obj winobj\rwlrast.obj winobj\rwlsql.obj winobj\rwlvariable.obj winobj\rwlpatch.obj
link /out:..\bin\rwloadsim.exe winobj\lex.rwla.obj winobj\lex.rwly.obj winobj\lex.rwlz.obj winobj\rwlparser.tab.obj winobj\rwldiprs.tab.obj winobj\rwlcodeadd.obj winobj\rwlcoderun.obj winobj\rwldynsql.obj winobj\rwlerror.obj winobj\rwlexprcomp.obj winobj\rwlexpreval.obj winobj\rwlmain.obj winobj\rwlmisc.obj winobj\rwlrast.obj winobj\rwlsql.obj winobj\rwlvariable.obj winobj\rwlpatch.obj %1%\sdk\lib\msvc\oci.lib
link /out:..\bin\rwlerror.exe winobj\rwlmainerror.obj 
