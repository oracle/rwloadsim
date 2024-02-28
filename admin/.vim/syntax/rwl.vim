" Vim syntax file
" Language: RWP*Worklod Simualator
" Maintainer: Bjørn Kisbye Ensig
" Copyright (c) 2023 Oracle Corporation
" Licensed under the Universal Permissive License v 1.0
" as shown at https://oss.oracle.com/licenses/upl/
" Latest Revision: 28 feb 2024

if exists("b:current_syntax")
  finish
endif

syn keyword rwlKeyword connect username password database commit rollback default
syn keyword rwlKeyword at results procedure threads run bind define start private
syn keyword rwlKeyword count stop end sessionpool dedicated reconnect none while
syn keyword rwlKeyword uniform erlang erlang2 double integer string random array
syn keyword rwlKeyword file write writeline print printline printvar if then else 
syn keyword rwlKeyword wait every loop for all execute null sum isnull and or sql
syn keyword rwlKeyword cursorcache nocursorcache modify statistics nostatistics exit
syn keyword rwlKeyword queue noqueue leak break return drcp is not fflush getopt when
syn keyword rwlKeyword shardkey ignoreerror shift release ociping erlangk sql_id
syn keyword rwlKeyword sin cos exp log access defined requestmark statemark length
syn keyword rwlKeyword lengthb substr substrb readline regex regexsub regexsubg round
syn keyword rwlKeyword abort function bindout between clob blob raw date ignoreerror
syn keyword rwlKeyword getenv system opensessioncount activesessioncount serverrelease
syn keyword rwlKeyword unsigned hexadecimal octal printf fprintf encode decode elseif
syn keyword rwlKeyword connectionpool connectionclass sprintf global querynotification
syn keyword rwlKeyword normalrandom statisticsonly ceil trunc floor 
syn keyword rwlKeyword lobprefetch readlob writelob atan2 winslashf2b winslashf2bb
syn keyword rwlKeyword getrusage instr instrb regexextract nextgroup=rwlNumber skipwhite

syn match rwlVariable "\$#"
syn match rwlVariable "\$\d\+"
syn keyword rwlVariable runnumber runseconds threadnumber everyuntil stdin epochseconds
syn keyword rwlVariable sysseconds usrseconds oraerror oraerrortext hostname processnumber
syn keyword rwlVariable stdout stderr loopnumber nextgroup=rwlNumber skipwhite

syn match rwlNumber '\<\d\+'
syn match rwlNumber '\<\d\+\.\d*'
syn match rwlNumber '\<\d\+[Ee][+-]\?\d\+'
syn match rwlNumber '\<\d\+\.\d*[Ee][+-]\?\d\+'

syn match rwlComment "#.*$" 
syn region rwlString	start=+"+ skip=+\\\n\|\\\\\|\\"+ end=+"+

syn match rwlString '\$[A-Z][_A-Za-z0-9]*'

" SQL that is terminated by ; . or /
" Note that these include anything starting with 'create'
" but some of these gets modified to plsql below
syn region rwlSQL	start='/\*' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\ccreate[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cselect[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cinsert[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cupdate[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cdelete[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\ccall[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cdrop[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cmerge[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\calter[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cwith[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\ctruncate[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\caudit[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cnoaudit[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\crevoke[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\crename[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cpurge[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\csavepoint[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\canalyze[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cgrant[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
" the double keyword ones follow here
syn region rwlSQL	start='\<\ccomment[ \n\t]\+on[ \t\n]' end='\(\(^[ \n\t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cexplain[ \n\t]\+plan[ \t\n]' end='\(\(^[ \n\t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cflashback[ \n\t]\+database[ \t\n]' end='\(\(^[ \n\t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cflashback[ \n\t]\+table[ \t\n]' end='\(\(^[ \n\t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\clock[ \n\t]\+table[ \t\n]' end='\(\(^[ \n\t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cset[ \n\t]\+constraint[ \t\n]' end='\(\(^[ \n\t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cset[ \n\t]\+transaction[ \t\n]' end='\(\(^[ \n\t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cset[ \n\t]\+role[ \t\n]' end='\(\(^[ \n\t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cassociate[ \t\n]\+statistics[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\<\cdisassociate[ \t\n]\+statistics[ \t\n]' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
" PL/SQL that requires . or /
" Note that these MUST come after the above as they change the definition
" of a number of statement beginning with 'create' that require PL/SQL
" termination
syn region rwlSQL	start='\<\cbegin[ \t\n]' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\<\cdeclare[ \t\n]' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='--' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\<\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?trigger[ \t\n]' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\<\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?type[ \t\n]' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\<\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?java[ \t\n]' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\<\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?function[ \t\n]' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\<\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?procedure[ \t\n]' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\<\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?package[ \t\n]' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\<\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?library[ \t\n]' end='\(^[ \t]*[/.]$\)'

syn match rwlDirective '\$statistics:basic'
syn match rwlDirective '\$statistics:histograms'
syn match rwlDirective '\$statistics:all'
syn match rwlDirective '\$ampersand:on'
syn match rwlDirective '\$ampersand:off'
syn match rwlDirective '\$queueeverytiming:on'
syn match rwlDirective '\$queueeverytiming:off'
syn match rwlDirective '\$errordetail:on'
syn match rwlDirective '\$errortime:on'
syn match rwlDirective '\$errortime:off'
syn match rwlDirective '\$sessionpool_no_rlb:on'
syn match rwlDirective '\$sessionpool_no_rlb:off'
syn match rwlDirective '\$errortime:off'
syn match rwlDirective '\$eventnotify:on'
syn match rwlDirective '\$eventnotify:off'
syn match rwlDirective '\$nameexpand:on'
syn match rwlDirective '\$nameexpand:off'
syn match rwlDirective '\$reconnect1017:on'
syn match rwlDirective '\$reconnect1017:off'
syn match rwlDirective '\$pre31fileassign:warn'
syn match rwlDirective '\$pre31fileassign:on'
syn match rwlDirective '\$pre31fileassign:off'
syn match rwlDirective '\$trigonometry:radians'
syn match rwlDirective '\$trigonometry:degrees'
syn match rwlDirective '\$niceabort:on'
syn match rwlDirective '\$niceabort:off'
syn match rwlDirective '\$queue:on'
syn match rwlDirective '\$queue:off'
syn match rwlDirective '\$setaction:on'
syn match rwlDirective '\$setaction:reset'
syn match rwlDirective '\$setaction:off'
syn match rwlDirective '\$bindoffset:[01]'
syn match rwlDirective '\$dbfailures:\d\+' 
syn match rwlDirective '\$mute:\d\+' 
syn match rwlDirective '\$alwaysmute:\d\+' 
syn match rwlDirective '\$maxident:\d\+' 
syn match rwlDirective '\$maxcode:\d\+' 
syn match rwlDirective '\$maxlocals:\d\+' 
syn match rwlDirective '\$maxmesg:\d\+'
syn match rwlDirective '\$readbuffer:\d\+'
syn match rwlDirective '\$ora01013:stop'
syn match rwlDirective '\$ora01013:continue'
syn match rwlDirective '\$oraerror:stop'
syn match rwlDirective '\$oraerror:continue'
syn match rwlDirective '\$oraerror:nocount'
syn match rwlDirective '\$oerstatistics:on'
syn match rwlDirective '\$oerstatistics:off'
syn match rwlDirective '\$implicit:off'
syn match rwlDirective '\$implicit:bind'
syn match rwlDirective '\$implicit:define'
syn match rwlDirective '\$implicit:both'
syn match rwlDirective '\$implicit:lowercase'
syn match rwlDirective '\$implicit:keepcase'
syn match rwlDirective '\$oerstatistics:[0-9][0-9]*'
syn match rwlDirective '\$clockstart:[0-9][0-9]*'
syn match rwlDirective '\$clockstart:[0-9][0-9]*\.[0-9]*'
syn match rwlDirective '\$startseconds:[0-9][0-9]*'
syn match rwlDirective '\$startseconds:[0-9][0-9]*\.[0-9]*'
syn match rwlDirective '\$iformat:%[\.0-9d#iouxXlL]*'
syn match rwlDirective '\$dformat:%[\.0-9][\.0-9d#aAeEfFgGlL]*'
syn match rwlDirective '\$randseed:[0-9a-fA-F][0-9a-fA-F]*'
syn match rwlDirective '\$randseed:0[xX][0-9a-fA-F][0-9a-fA-F]*'
syn match rwlDirective '\$longoption:[a-z][-a-z]*'
syn match rwlDirective '\$longoption:[a-z][-a-z]*=[^ ][^ ]*'
syn match rwlDirective '\$userhelp:"[^\n]*"'
syn match rwlDirective '\$useroption:[a-zA-Z][-0-9a-zA-Z_]*'
syn match rwlDirective '\$useroption:[a-zA-Z][-0-9a-zA-Z_]*:"[^\n]*"'
syn match rwlDirective '\$userswitch:[a-zA-Z][-0-9a-zA-Z_]*'
syn match rwlDirective '\$userswitch:[a-zA-Z][-0-9a-zA-Z_]*:"[^\n]*"'
syn match rwlDirective '\$debugon:[0-9A-Za-z][0-9a-zA-Z,]*'
syn match rwlDirective '\$debugoff:[0-9A-Za-z][0-9a-zA-Z,]*'
syn match rwlDirective '\$include:"[^"<>]*"'
syn match rwlDirective '\$include:<[^"<>]*>'
syn match rwlDirective '\$sqllogging:file:"[^"<>]*"'
syn match rwlDirective '\$sqllogging:append:"[^"<>]*"'
syn match rwlDirective '\$sqllogging:stdout'
syn match rwlDirective '\$sqllogging:stderr'
syn match rwlDirective '\$sqllogging:off'
syn match rwlDirective '\$if[^o]'
syn match rwlDirective '\$then'
syn match rwlDirective '\$else'
syn match rwlDirective '\$endif'
syn match rwlDirective '\$linux'
syn match rwlDirective '\$solaris'
syn match rwlDirective '\$windows'
syn match rwlDirective '\$macos'
syn match rwlDirective '\$embeddeddmlarray:\d\+' 
syn match rwlDirective '\$embeddedqueryarray:\d\+' 
syn match rwlDirective '\$bindoutname:on'
syn match rwlDirective '\$bindoutname:on:[a-zA-Z][0-9a-zA-Z_]*'
syn match rwlDirective '\$bindoutname:off'
syn match rwlDirective '\$musymbol:[^ ][^ ]*'
syn match rwlDirective '\$hostname:[a-zA-Z0-9_][-a-zA-Z0-9_\.]*'
syn match rwlDirective '\$slashconvert:on'
syn match rwlDirective '\$slashconvert:off'
syn match rwlDirective '\$crnlreadline:on'
syn match rwlDirective '\$crnlreadline:off'
syn match rwlDirective '\$crnlwriteline:on'
syn match rwlDirective '\$crnlwriteline:off'
syn match rwlDirective '\$crnlstring:on'
syn match rwlDirective '\$crnlstring:off'
syn match rwlDirective '\$crnlgeneral:on'
syn match rwlDirective '\$crnlgeneral:off'


let b:current_syntax = "rwl"
hi def link rwlComment Comment
hi def link rwlNumber Constant
hi def link rwlString Constant
hi def link rwlSQL Statement
hi def link rwlKeyword Type
hi def link rwlVariable Identifier
hi def link rwlDirective PreProc

