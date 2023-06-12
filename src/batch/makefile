CC = g++
CFLAGS = -Wall -std=c++11 -g
INCLUDES = -I./gui/headers
SRCDIR = gui/sources
OBJDIR = obj
SOURCES = $(SRCDIR)/gamelogic.cpp batch.cpp
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))

all: game

game: $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	del /Q $(OBJDIR)\*.o game.exe

run:
	./game

build: all
