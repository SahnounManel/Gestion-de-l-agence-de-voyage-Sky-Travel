## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = gestionexcurtionvoiture

gestionexcurtionvoiture_SOURCES = \
	main.c \
	support.c support.h \
	interface.c interface.h \
	callbacks.c callbacks.h \
	crud.c crud.h \
	affichage.c affichage.h

gestionexcurtionvoiture_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

