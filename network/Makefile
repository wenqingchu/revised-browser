#############################################################################
# Makefile for building: network
# Generated by qmake (2.01a) (Qt 4.8.1) on: ?? 8? 12 05:17:33 2013
# Project:  network.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile network.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I../kernel -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/i386-linux-gnu -lQtGui -lQtNetwork -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = Cache.cpp \
		Cookie.cpp \
		main.cpp \
		Network.cpp \
		mime_sniffer.cc \
		../kernel/Message.cpp \
		Manager.cpp moc_Cookie.cpp \
		moc_Network.cpp \
		moc_Manager.cpp
OBJECTS       = Cache.o \
		Cookie.o \
		main.o \
		Network.o \
		mime_sniffer.o \
		Message.o \
		Manager.o \
		moc_Cookie.o \
		moc_Network.o \
		moc_Manager.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		network.pro
QMAKE_TARGET  = network
DESTDIR       = 
TARGET        = network

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: network.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/i386-linux-gnu/libQtGui.prl \
		/usr/lib/i386-linux-gnu/libQtNetwork.prl \
		/usr/lib/i386-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile network.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_phonon.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/i386-linux-gnu/libQtGui.prl:
/usr/lib/i386-linux-gnu/libQtNetwork.prl:
/usr/lib/i386-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile network.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/network1.0.0 || $(MKDIR) .tmp/network1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/network1.0.0/ && $(COPY_FILE) --parents Cache.h Cookie.h Network.h Manager.h mime_sniffer.h ../kernel/Message.h .tmp/network1.0.0/ && $(COPY_FILE) --parents Cache.cpp Cookie.cpp main.cpp Network.cpp mime_sniffer.cc ../kernel/Message.cpp Manager.cpp .tmp/network1.0.0/ && (cd `dirname .tmp/network1.0.0` && $(TAR) network1.0.0.tar network1.0.0 && $(COMPRESS) network1.0.0.tar) && $(MOVE) `dirname .tmp/network1.0.0`/network1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/network1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_Cookie.cpp moc_Network.cpp moc_Manager.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_Cookie.cpp moc_Network.cpp moc_Manager.cpp
moc_Cookie.cpp: Cookie.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) Cookie.h -o moc_Cookie.cpp

moc_Network.cpp: Manager.h \
		Network.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) Network.h -o moc_Network.cpp

moc_Manager.cpp: Manager.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) Manager.h -o moc_Manager.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

Cache.o: Cache.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Cache.o Cache.cpp

Cookie.o: Cookie.cpp Cookie.h \
		Manager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Cookie.o Cookie.cpp

main.o: main.cpp Manager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

Network.o: Network.cpp Network.h \
		Manager.h \
		mime_sniffer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Network.o Network.cpp

mime_sniffer.o: mime_sniffer.cc mime_sniffer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mime_sniffer.o mime_sniffer.cc

Message.o: ../kernel/Message.cpp ../kernel/Message.h \
		../kernel/kernel.h \
		../kernel/DomainName.h \
		../kernel/Access.h \
		../kernel/AIOHelper.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Message.o ../kernel/Message.cpp

Manager.o: Manager.cpp Manager.h \
		Network.h \
		Cookie.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Manager.o Manager.cpp

moc_Cookie.o: moc_Cookie.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Cookie.o moc_Cookie.cpp

moc_Network.o: moc_Network.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Network.o moc_Network.cpp

moc_Manager.o: moc_Manager.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Manager.o moc_Manager.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

