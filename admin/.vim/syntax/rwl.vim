" Vim syntax file
" Language: RWP*Worklod Simualator
" Maintainer: Bjørn Kisbye Ensig
" Latest Revision: 09 may 2022

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
syn keyword rwlKeyword queue noqueue leak break return drcp is not fflush getopt
syn keyword rwlKeyword shardkey ignoreerror shift release ociping erlangk sql_id
syn keyword rwlKeyword sin cos exp log access defined requestmark statemark length
syn keyword rwlKeyword lengthb substr substrb readline regex regexsub regexsubg round
syn keyword rwlKeyword abort function bindout between clob blob raw date ignoreerror
syn keyword rwlKeyword getenv system opensessioncount activesessioncount serverrelease
syn keyword rwlKeyword unsigned hexadecimal octal printf fprintf encode decode elseif
syn keyword rwlKeyword connectionpool connectionclass sprintf
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
syn region rwlString	start=+"+ skip=+\\\n\\\\\|\\"+ end=+"+

syn match rwlString '\$[A-Z][_A-Za-z0-9]*'

" SQL that is terminated by ; . or /
" Note that these include anything starting with 'create'
syn region rwlSQL	start='\ccreate\|select\|insert\|update\|delete' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\cdrop\|merge\|alter\|with\|truncate\|\/\*' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\caudit\|noaudit\|revoke\|purge\|savepoint' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\canalyze\|comment[ \n\t]\+on\|explain[ \n\t]\+plan\|grant' end='\(\(^[ \n\t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\cflashback[ \n\t]\+database\|flashback[ \n\t]\+table\|lock[ \n\t]\+table' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\cset[ \t\n]\+constraint\|set[ \t\n]\+transaction\|set[ \t\n]\+role' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
syn region rwlSQL	start='\cassociate[ \t\n]\+statistics\|disassociate[ \t\n]\+statistics' end='\(\(^[ \t]*[/.]$\)\|\(;$\)\)'
" PL/SQL that requires . or /
" Note that these MUST come after the above as they change the definition
" of a number of statement beginning with 'create' that require PL/SQL
" termination
syn region rwlSQL	start='\cbegin\|declare\|--\|call' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?trigger' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?type' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?function' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?procedure' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?package' end='\(^[ \t]*[/.]$\)'
syn region rwlSQL	start='\ccreate[ \t\n]\+\(or[ \t\n]\+replace[ \t\n]\+\)\?library' end='\(^[ \t]*[/.]$\)'

syn match rwlDirective '\$statistics:basic'
syn match rwlDirective '\$statistics:histograms'
syn match rwlDirective '\$statistics:all'
syn match rwlDirective '\$errortime:on'
syn match rwlDirective '\$errortime:off'
syn match rwlDirective '\$eventnotify:on'
syn match rwlDirective '\$eventnotify:off'
syn match rwlDirective '\$nameexpand:on'
syn match rwlDirective '\$nameexpand:off'
syn match rwlDirective '\$reconnect1017:on'
syn match rwlDirective '\$reconnect1017:off'
syn match rwlDirective '\$queue:on'
syn match rwlDirective '\$queue:off'
syn match rwlDirective '\$setaction:on'
syn match rwlDirective '\$setaction:reset'
syn match rwlDirective '\$setaction:off'
syn match rwlDirective '\$bindoffset:[01]'
syn match rwlDirective '\$dbfailures:\d\+' 
syn match rwlDirective '\$mute:\d\+' 
syn match rwlDirective '\$maxident:\d\+' 
syn match rwlDirective '\$maxcode:\d\+' 
syn match rwlDirective '\$maxlocals:\d\+' 
syn match rwlDirective '\$maxmesg:\d\+'
syn match rwlDirective '\$readbuffer:\d\+'
syn match rwlDirective '\$ora01013:stop'
syn match rwlDirective '\$ora01013:continue'
syn match rwlDirective '\$oraerror:stop'
syn match rwlDirective '\$oraerror:continue'
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
syn match rwlDirective '\$useroption:[a-zA-Z][-0-9a-zA-Z_]*'
syn match rwlDirective '\$useroption:[a-zA-Z][-0-9a-zA-Z_]*:"[^"]*"'
syn match rwlDirective '\$userswitch:[a-zA-Z][-0-9a-zA-Z_]*'
syn match rwlDirective '\$userswitch:[a-zA-Z][-0-9a-zA-Z_]*:"[^"]*"'
syn match rwlDirective '\$debugon:[0-9a-fA-F][0-9a-fA-F]*'
syn match rwlDirective '\$debugoff:[0-9a-fA-F][0-9a-fA-F]*'
syn match rwlDirective '\$debugon:0[xX][0-9a-fA-F][0-9a-fA-F]*'
syn match rwlDirective '\$debugoff:0[xX][0-9a-fA-F][0-9a-fA-F]*'
syn match rwlDirective '\$include:"[^"<>]*"'
syn match rwlDirective '\$include:<[^"<>]*>'
syn match rwlDirective '\$if[^o]'
syn match rwlDirective '\$then'
syn match rwlDirective '\$else'
syn match rwlDirective '\$endif'
syn match rwlDirective '\$embeddeddmlarray:\d\+' 
syn match rwlDirective '\$embeddedqueryarray:\d\+' 


let b:current_syntax = "rwl"
hi def link rwlComment Comment
hi def link rwlNumber Constant
hi def link rwlString Constant
hi def link rwlSQL Statement
hi def link rwlKeyword Type
hi def link rwlVariable Identifier
hi def link rwlDirective PreProc

