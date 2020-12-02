BEGIN { good=0; bad=0; maybe=0; }

/good/	{ good++; }
/bad/	{ bad++; }
/maybe/	{ maybe++; }

END { print "good:" good ", bad:" bad ", maybe:" maybe }
