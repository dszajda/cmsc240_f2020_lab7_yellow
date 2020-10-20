EXECS = tester
OBJS = Shape.o tester.o

CC = g++
CCFLAGS = -std=c++17 -Wall -g

all: $(EXECS)

tester: $(OBJS)
	$(CC) $(CCFLAGS) -o tester $(OBJS)

Shape.o: Shape.cpp
	$(CC) $(CCFLAGS) -c Shape.cpp

tester.o: tester.cpp
	$(CC) $(CCFLAGS) -c tester.cpp


clean:
	/bin/rm -f a.out $(OBJS) $(EXECS)
