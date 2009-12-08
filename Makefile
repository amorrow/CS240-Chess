CC = g++
GTKMM = gtkmm-2.4
SIGC = sigc++-2.0
LIBGLADE = libglademm-2.4

FLAGS = -Wall -g -Iinc -Ilib/inc

#Add the next line to the FLAGS variable to turn of debugging messages to the Message area of the GUI
#-DLOG_LEVEL_HIDE_MASK="(G_LOG_LEVEL_DEBUG)"


#CFLAGS are the -I values needed to compile files using the GTKMM, SIGC, and LIBGLADE libraries
CFLAGS = `pkg-config $(GTKMM) $(SIGC) $(LIBGLADE) --cflags`  -Iimages/
#LIBS are the paths to the static libraries for GTKMM, SIGC, and LIBGLADE needed for linking
LIBS = `pkg-config $(GTKMM) $(SIGC) $(LIBGLADE) --libs`

#LIB_FLAGS D_LOG_DOMAIN is used by g_log in the ChessGui library to seperate logging messages from the library
# from logging messages from the students code
LIB_FLAGS = -DG_LOG_DOMAIN=\"ChessGui\" -shared -fPIC


LIBRARY= lib/libcs240.so
EXE_NAME = bin/chess

TEST_BIN_NAME = test/bin/test_chess
TEST_MAIN_SOURCE = test/src/main.cpp
TEST_MAIN_OBJ = test/obj/main.o

SOURCES = $(foreach file, $(shell ls src/*.cpp), $(basename $(notdir $(file))))


LIB_OBJ_FILES = lib/obj/ChessGui.o lib/obj/ChessGuiBoard.o lib/obj/ChessGuiBoardCell.o \
		lib/obj/ChessGuiImages.o lib/obj/SelectDialog.o
OBJS = $(foreach file, $(SOURCES), obj/$(file).o)
OBJS_WITHOUT_MAIN = $(filter-out obj/main.o,$(OBJS))


.PHONY: run clean bin test lib memtest depend


run: $(EXE_NAME)
	./$(EXE_NAME)


clean: 
	-rm -f $(EXE_NAME)
	-rm -f $(OBJS)
	-rm -f src/*~ inc/*~
	-rm -f $(LIBRARY) $(LIB_OBJ_FILES)
	-rm -f lib/src/*~ lib/inc/*~
	-rm -f *.mk
		
	

bin: $(EXE_NAME)

test: $(TEST_BIN_NAME)
	$(TEST_BIN_NAME)

lib: $(LIBRARY) 

	
memtest: $(EXE_NAME)
	G_SLICE=always-malloc G_DEBUG=gc-friendly valgrind --tool=memcheck --leak-check=yes --num-callers=20 --show-reachable=yes --suppressions=chess.supp $(EXE_NAME)

	
$(EXE_NAME): $(OBJS)  $(LIBRARY)
	$(CC) $(FLAGS) $(CFLAGS) $(LIBS) -o $(EXE_NAME) $(OBJS) $(LIBRARY) 

$(TEST_BIN_NAME) : $(OBJS) $(LIBRARY) $(TEST_MAIN_OBJ)
	$(CC) $(FLAGS) $(CFLAGS) $(LIBS) -o $(TEST_BIN_NAME) $(OBJS_WITHOUT_MAIN) $(TEST_MAIN_OBJ) $(LIBRARY)

$(TEST_MAIN_OBJ) : $(TEST_MAIN_SOURCE)
	$(CC) -c $(FLAGS) $(CFLAGS) -o $(TEST_MAIN_OBJ) $(TEST_MAIN_SOURCE)

obj/main.o: src/main.cpp lib/inc/ChessGuiImages.h inc/Chess.h
	$(CC) -c $(FLAGS) $(CFLAGS) -o obj/main.o src/main.cpp
obj/Chess.o: src/Chess.cpp inc/Chess.h lib/inc/SelectDialog.h lib/inc/ChessGuiDefines.h lib/inc/ChessGui.h
	$(CC) -c $(FLAGS) $(CFLAGS) -o obj/Chess.o src/Chess.cpp

obj/%.o : src/%.cpp
	$(CC) -c $(FLAGS) $(CFLAGS) -o $@ $<

depend : $(shell ls src/*.cpp) $(shell ls inc/*.h)
	@-rm -f depend.mk
	@for f in $(SOURCES) ; do g++ -MM -MT obj/$$f.o $(FLAGS) $(CFLAGS) src/$$f.cpp >> depend.mk; done

include depend.mk





$(LIBRARY): $(LIB_OBJ_FILES) 
	g++ -o $(LIBRARY) $(LIB_FLAGS) $(LIB_OBJ_FILES)









########DO NOT DELETE###########################################################################################3
#Below is some Makefile Magic to compile the libraries, you do not need to
#understand or alter it.  If you would like to, look up the Make manual online, it's very comprehensive	
LIBSOURCES = $(foreach file, $(shell ls lib/src/*.cpp), $(basename $(notdir $(file))))

lib/obj/%.o : lib/src/%.cpp lib/inc/Inline.h
	$(CC) $(FLAGS) $(LIB_FLAGS) $(CFLAGS) -c -o $@ $< 

  #The following is part of what lets us include Images within the binary. It currently only loads the default
  #"Image not found" icon that we use

INLINE_IMAGES = $(shell ls lib/img/* )
INLINE_IMAGE_PAIRS =$(foreach file, $(INLINE_IMAGES), $(basename $(notdir $(file)) $(file).* ))	
lib/inc/Inline.h: $(INLINE_IMAGES)
	@echo "Updating Images"
	gdk-pixbuf-csource --raw --build-list $(INLINE_IMAGE_PAIRS) > lib/inc/Inline.h

  #generates the dependencies of the library
library.mk: $(shell ls lib/src/*.cpp) $(shell ls lib/inc/*.h)
	@-rm -f library.mk
	@-echo "#library.mk is a makefile generated using the compiler to determine dependencies\n" >>library.mk
	@for f in $(LIBSOURCES) ; do $(CC) -MM -MT lib/obj/$$f.o -I lib/inc/ -I images lib/src/$$f.cpp >> library.mk; done

include library.mk

