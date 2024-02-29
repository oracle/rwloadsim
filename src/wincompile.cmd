set /p rwlpatch<rwlpatch.txt
set /a rwlpatch+=1
echo %rwlpatch% > rwlpatch.txt
echo unsigned int rwlpatch=%rwlpatch%; > rwlpatch.c
nmake /F Makefile.win
