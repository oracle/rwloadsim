" Vim syntax file
" Language: RWP*Worklod Simualator
" Maintainer: Bjørn Kisbye Ensig
" Latest Revision: 11 Jan 2021

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
syn keyword rwlKeyword unsigned hexadecimal octal fprintf encode decode
syn keyword rwlKeyword getrusage instr instrb regexextract nextgroup=rwlNumber skipwhite

syn match rwlVariable "\$#"
syn match rwlVariable "\$\d\+"
syn keyword rwlVariable runnumber runseconds threadnumber everyuntil stdin
syn keyword rwlVariable sysseconds usrseconds oraerror oraerrortext hostname
syn keyword rwlVariable stdout stderr loopnumber nextgroup=rwlNumber skipwhite

syn match rwlNumber '\<\d\+'
syn match rwlNumber '\<\d\+\.\d*'
syn match rwlNumber '\<\d\+[Ee][+-]\?\d\+'
syn match rwlNumber '\<\d\+\.\d*[Ee][+-]\?\d\+'
syn match rwlComment "#.*$" 
syn region rwlString	start=+"+ skip=+\\\n\\\\\|\\"+ end=+"+

syn match rwlString '\$[A-Z][_A-Za-z0-9]*'

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
syn match rwlDirective '\$oerstatistics:[0-9][0-9]*'
syn match rwlDirective '\$clockstart:[0-9][0-9]*'
syn match rwlDirective '\$clockstart:[0-9][0-9]*\.[0-9]*'
syn match rwlDirective '\$startseconds:[0-9][0-9]*'
syn match rwlDirective '\$startseconds:[0-9][0-9]*\.[0-9]*'
syn match rwlDirective '\$iformat:%[\.0-9d#iouxXlL]*'
syn match rwlDirective '\$dformat:%[\.0-9][\.0-9d#aAeEfFgGlL]*'
syn match rwlDirective '\$randseed:[0-9a-fA-F][0-9a-fA-F]*'
syn match rwlDirective '\$longoption:[a-z][-a-z]*'
syn match rwlDirective '\$longoption:[a-z][-a-z]*=[^ ][^ ]*'
syn match rwlDirective '\$useroption:[a-zA-Z][0-9a-zA-Z_]*'
syn match rwlDirective '\$useroption:[a-zA-Z][0-9a-zA-Z_]*:"[^"]*"'
syn match rwlDirective '\$userswitch:[a-zA-Z][0-9a-zA-Z_]*'
syn match rwlDirective '\$userswitch:[a-zA-Z][0-9a-zA-Z_]*:"[^"]*"'
syn match rwlDirective '\$debugon:[0-9a-fA-F][0-9a-fA-F]*'
syn match rwlDirective '\$debugoff:[0-9a-fA-F][0-9a-fA-F]*'
syn match rwlDirective '\$include:"[^"<>]*"'
syn match rwlDirective '\$include:<[^"<>]*>'
syn match rwlDirective '\$if[^o]'
syn match rwlDirective '\$then'
syn match rwlDirective '\$else'
syn match rwlDirective '\$endif'


let b:current_syntax = "rwl"
hi def link rwlComment Comment
hi def link rwlNumber Constant
hi def link rwlString Constant
hi def link rwlKeyword Type
hi def link rwlVariable Identifier
hi def link rwlDirective PreProc

