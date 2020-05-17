#C Workshop 1 Makefile

CC=gcc
CCFLAGS  = -pedantic -Wall -Werror

all:
	$(CC) $(CCFLAGS) modulo.c -o modulo
	$(CC) $(CCFLAGS) ternary.c -o ternary
	$(CC) $(CCFLAGS) veryBadExample.c -o veryBadExample
	$(CC) buffer.c firtap.c -o buffer
	$(CC) FSM.c trafficLight.c db.c -o FSM

modulo:
	$(CC) $(CCFLAGS) modulo.c -o modulo

ternary:
	$(CC) $(CCFLAGS) ternary.c -o ternary

buffer:
	$(CC) buffer.c firtap.c -o buffer

FSM:
	$(CC) FSM.c trafficLight.c db.c -o FSM

clean:
	rm -f modulo
	rm -f ternary
	rm -f buffer
	rm -f FSM
	rm -f veryBadExample
