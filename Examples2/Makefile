#C Workshop 2 Makefile

CC=gcc
CCFLAGS  = -pedantic -Wall -Werror

all:
	$(CC) $(CCFLAGS) modulo.c -o modulo
	$(CC) $(CCFLAGS) ternary.c -o ternary
	$(CC) $(CCFLAGS) badGoto.c -o badGoto
	$(CC) $(CCFLAGS) buffer.c fir3tap.c -o buffer

modulo:
	$(CC) $(CCFLAGS) modulo.c -o modulo

ternary:
	$(CC) $(CCFLAGS) ternary.c -o ternary

badGoto:
	$(CC) $(CCFLAGS) badGoto.c -o badGoto

buffer:
	$(CC) $(CCFLAGS) buffer.c fir3tap.c -o buffer


clean:
	rm -f modulo
	rm -f ternary
	rm -f buffer
	rm -f badGoto
