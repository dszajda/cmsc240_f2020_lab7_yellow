EXECS = tester
OBJS = Shape.o Tester.o

CC = g++
CCFLAGS = -std=c++17 -Wall -g

all: $(EXECS)

tester: $(OBJS)
	$(CC) $(CCFLAGS) -o tester $(OBJS)

Shape.o: Shape.cpp
	$(CC) $(CCFLAGS) -c Shape.cpp

Tester.o: Tester.cpp
	$(CC) $(CCFLAGS) -c Tester.cpp


clean:
	/bin/rm -f a.out $(OBJS) $(EXECS)