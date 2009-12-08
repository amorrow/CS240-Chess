#library.mk is a makefile generated using the compiler to determine dependencies\n
lib/obj/ChessGuiBoardCell.o: lib/src/ChessGuiBoardCell.cpp \
 lib/inc/ChessGuiBoardCell.h lib/inc/ChessGuiDefines.h \
 lib/inc/ChessGuiImages.h
lib/obj/ChessGuiBoard.o: lib/src/ChessGuiBoard.cpp \
 lib/inc/ChessGuiBoard.h lib/inc/ChessGuiDefines.h \
 lib/inc/ChessGuiBoardCell.h lib/inc/ChessGui.h lib/inc/ChessGuiBoard.h \
 lib/inc/ChessGuiImages.h
lib/obj/ChessGui.o: lib/src/ChessGui.cpp lib/inc/ChessGui.h \
 lib/inc/ChessGuiDefines.h lib/inc/ChessGuiBoard.h \
 lib/inc/ChessGuiBoardCell.h lib/inc/ChessGuiImages.h \
 lib/inc/SelectDialog.h
lib/obj/ChessGuiImages.o: lib/src/ChessGuiImages.cpp \
 lib/inc/ChessGuiImages.h lib/inc/ChessGuiDefines.h lib/inc/Inline.h
lib/obj/SelectDialog.o: lib/src/SelectDialog.cpp lib/inc/SelectDialog.h
