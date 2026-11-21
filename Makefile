CC = gcc

CFLAGS = -Wall -Wextra -Wpedantic -std=c23 -g



all: secure



secure: main.c secure.c secure.h

	$(CC) $(CFLAGS) -o secure main.c secure.c



test: secure

	./secure



.PHONY: all test clean



clean:

	rm -f secure *.o
