#############################################################################
# Makefile for building: op2
# Generated by qmake (2.01a) (Qt 4.8.1) on: ?? 8? 12 05:17:33 2013
# Project:  op2.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile op2.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_WEBKIT_LIB -DQT_XML_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -D_REENTRANT -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -O2 -D_REENTRANT -Wall -W $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtUiTools -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtXml -I/usr/include/qt4/QtWebKit -I/usr/include/qt4 -I. -I../../kernel -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/lib
LIBS          = $(SUBLIBS)  -L/usr/lib/i386-linux-gnu -lX11 -lQtWebKit -lQtXml -lQtGui -lQtNetwork -lQtCore -lQtUiTools -lpthread 
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

SOURCES       = main.cpp \
		webview.cpp \
		webpage.cpp \
		OpNetwork.cpp \
		OpCookieJar.cpp \
		OpNetworkReply.cpp \
		../../kernel/Message.cpp \
		OpNetworkAccessManager.cpp \
		jswindow.cpp \
		OpDownloader.cpp \
		FrameInit.cpp moc_webview.cpp \
		moc_webpage.cpp \
		moc_OpNetwork.cpp \
		moc_OpCookieJar.cpp \
		moc_OpNetworkReply.cpp \
		moc_OpNetworkAccessManager.cpp \
		moc_jswindow.cpp \
		moc_OpDownloader.cpp \
		moc_FrameInit.cpp \
		qrc_html.cpp
OBJECTS       = main.o \
		webview.o \
		webpage.o \
		OpNetwork.o \
		OpCookieJar.o \
		OpNetworkReply.o \
		Message.o \
		OpNetworkAccessManager.o \
		jswindow.o \
		OpDownloader.o \
		FrameInit.o \
		moc_webview.o \
		moc_webpage.o \
		moc_OpNetwork.o \
		moc_OpCookieJar.o \
		moc_OpNetworkReply.o \
		moc_OpNetworkAccessManager.o \
		moc_jswindow.o \
		moc_OpDownloader.o \
		moc_FrameInit.o \
		qrc_html.o
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
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/uitools.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		op2.pro
QMAKE_TARGET  = op2
DESTDIR       = 
TARGET        = op2

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

Makefile: op2.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
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
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/uitools.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/i386-linux-gnu/libQtWebKit.prl \
		/usr/lib/i386-linux-gnu/libQtXml.prl \
		/usr/lib/i386-linux-gnu/libQtGui.prl \
		/usr/lib/i386-linux-gnu/libQtNetwork.prl \
		/usr/lib/i386-linux-gnu/libQtCore.prl \
		/usr/lib/i386-linux-gnu/libQtUiTools.prl
	$(QMAKE) -o Makefile op2.pro
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
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/uitools.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/i386-linux-gnu/libQtWebKit.prl:
/usr/lib/i386-linux-gnu/libQtXml.prl:
/usr/lib/i386-linux-gnu/libQtGui.prl:
/usr/lib/i386-linux-gnu/libQtNetwork.prl:
/usr/lib/i386-linux-gnu/libQtCore.prl:
/usr/lib/i386-linux-gnu/libQtUiTools.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile op2.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/op21.0.0 || $(MKDIR) .tmp/op21.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/op21.0.0/ && $(COPY_FILE) --parents webview.h webpage.h OpNetwork.h OpCookieJar.h OpNetworkReply.h ../../kernel/Message.h OpNetworkAccessManager.h jswindow.h OpDownloader.h FrameInit.h .tmp/op21.0.0/ && $(COPY_FILE) --parents html.qrc .tmp/op21.0.0/ && $(COPY_FILE) --parents main.cpp webview.cpp webpage.cpp OpNetwork.cpp OpCookieJar.cpp OpNetworkReply.cpp ../../kernel/Message.cpp OpNetworkAccessManager.cpp jswindow.cpp OpDownloader.cpp FrameInit.cpp .tmp/op21.0.0/ && (cd `dirname .tmp/op21.0.0` && $(TAR) op21.0.0.tar op21.0.0 && $(COMPRESS) op21.0.0.tar) && $(MOVE) `dirname .tmp/op21.0.0`/op21.0.0.tar.gz . && $(DEL_FILE) -r .tmp/op21.0.0


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

compiler_moc_header_make_all: moc_webview.cpp moc_webpage.cpp moc_OpNetwork.cpp moc_OpCookieJar.cpp moc_OpNetworkReply.cpp moc_OpNetworkAccessManager.cpp moc_jswindow.cpp moc_OpDownloader.cpp moc_FrameInit.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_webview.cpp moc_webpage.cpp moc_OpNetwork.cpp moc_OpCookieJar.cpp moc_OpNetworkReply.cpp moc_OpNetworkAccessManager.cpp moc_jswindow.cpp moc_OpDownloader.cpp moc_FrameInit.cpp
moc_webview.cpp: webview.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) webview.h -o moc_webview.cpp

moc_webpage.cpp: webpage.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) webpage.h -o moc_webpage.cpp

moc_OpNetwork.cpp: OpNetwork.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) OpNetwork.h -o moc_OpNetwork.cpp

moc_OpCookieJar.cpp: OpCookieJar.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) OpCookieJar.h -o moc_OpCookieJar.cpp

moc_OpNetworkReply.cpp: OpNetworkReply.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) OpNetworkReply.h -o moc_OpNetworkReply.cpp

moc_OpNetworkAccessManager.cpp: OpNetworkAccessManager.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) OpNetworkAccessManager.h -o moc_OpNetworkAccessManager.cpp

moc_jswindow.cpp: jswindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) jswindow.h -o moc_jswindow.cpp

moc_OpDownloader.cpp: OpDownloader.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) OpDownloader.h -o moc_OpDownloader.cpp

moc_FrameInit.cpp: FrameInit.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) FrameInit.h -o moc_FrameInit.cpp

compiler_rcc_make_all: qrc_html.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_html.cpp
qrc_html.cpp: html.qrc \
		notfound.html
	/usr/bin/rcc -name html html.qrc -o qrc_html.cpp

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
compiler_clean: compiler_moc_header_clean compiler_rcc_clean 

####### Compile

main.o: main.cpp webview.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

webview.o: webview.cpp webview.h \
		webpage.h \
		OpDownloader.h \
		OpNetwork.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o webview.o webview.cpp

webpage.o: webpage.cpp webpage.h \
		webview.h \
		OpNetwork.h \
		jswindow.h \
		OpDownloader.h \
		FrameInit.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o webpage.o webpage.cpp

OpNetwork.o: OpNetwork.cpp OpNetwork.h \
		OpCookieJar.h \
		OpNetworkAccessManager.h \
		../../kernel/Message.h \
		../../kernel/kernel.h \
		../../kernel/DomainName.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o OpNetwork.o OpNetwork.cpp

OpCookieJar.o: OpCookieJar.cpp OpCookieJar.h \
		OpNetwork.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o OpCookieJar.o OpCookieJar.cpp

OpNetworkReply.o: OpNetworkReply.cpp OpNetworkReply.h \
		OpNetworkAccessManager.h \
		OpNetwork.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o OpNetworkReply.o OpNetworkReply.cpp

Message.o: ../../kernel/Message.cpp ../../kernel/Message.h \
		../../kernel/kernel.h \
		../../kernel/DomainName.h \
		../../kernel/Access.h \
		../../kernel/AIOHelper.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Message.o ../../kernel/Message.cpp

OpNetworkAccessManager.o: OpNetworkAccessManager.cpp OpNetworkAccessManager.h \
		OpNetworkReply.h \
		OpNetwork.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o OpNetworkAccessManager.o OpNetworkAccessManager.cpp

jswindow.o: jswindow.cpp jswindow.h \
		OpNetwork.h \
		webview.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o jswindow.o jswindow.cpp

OpDownloader.o: OpDownloader.cpp OpDownloader.h \
		OpNetwork.h \
		OpNetworkReply.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o OpDownloader.o OpDownloader.cpp

FrameInit.o: FrameInit.cpp FrameInit.h \
		OpNetwork.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o FrameInit.o FrameInit.cpp

moc_webview.o: moc_webview.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_webview.o moc_webview.cpp

moc_webpage.o: moc_webpage.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_webpage.o moc_webpage.cpp

moc_OpNetwork.o: moc_OpNetwork.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_OpNetwork.o moc_OpNetwork.cpp

moc_OpCookieJar.o: moc_OpCookieJar.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_OpCookieJar.o moc_OpCookieJar.cpp

moc_OpNetworkReply.o: moc_OpNetworkReply.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_OpNetworkReply.o moc_OpNetworkReply.cpp

moc_OpNetworkAccessManager.o: moc_OpNetworkAccessManager.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_OpNetworkAccessManager.o moc_OpNetworkAccessManager.cpp

moc_jswindow.o: moc_jswindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_jswindow.o moc_jswindow.cpp

moc_OpDownloader.o: moc_OpDownloader.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_OpDownloader.o moc_OpDownloader.cpp

moc_FrameInit.o: moc_FrameInit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_FrameInit.o moc_FrameInit.cpp

qrc_html.o: qrc_html.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_html.o qrc_html.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

