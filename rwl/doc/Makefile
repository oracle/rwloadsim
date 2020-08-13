
doc: rwlmanual.html rwlmanual.pdf

all: doc rwlsyntax.html

rwlmanual.html: rwlmanual.fodt
	libreoffice6.1 --convert-to html rwlmanual.fodt

rwlmanual.pdf: rwlmanual.fodt
	libreoffice6.1 --convert-to pdf rwlmanual.fodt

rwlsyntax.html:
	@echo Upload rwlsyntax.ebnf to http://www.bottlecaps.de/rr/ui 
	@echo to create nice, clickable syntax diagram

	
