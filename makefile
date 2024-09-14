IDIR = ./include

SRCDIR = ./src

CC = gcc

CFLAGS = -Wall -I$(IDIR) -g

OBJDIR = objects

BINDIR = bin

LIBS = -lssl -lcrypto

SRC = $(wildcard $(SRCDIR)/*.c)

OBJ = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))

all: objfolder binfolder bin/main

binfolder:
	mkdir -p $(BINDIR)

objfolder:
	mkdir -p $(OBJDIR)

bin/main: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ $(LIBS)

$(OBJDIR)/main.o: $(SRCDIR)/main.c
	$(CC) $(CFLAGS) -c $< -o $@ $(LIBS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(IDIR)/%.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean run 

clean:
	 rm -rf $(OBJDIR) $(BINDIR)
