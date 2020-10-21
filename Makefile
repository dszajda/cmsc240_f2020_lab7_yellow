EXECS = tester
OBJS = Shape.o tester.o Triangle.o Circle.o Rectangle.o

CC = g++
CCFLAGS = -std=c++17 -Wall -g

all: $(EXECS)

tester: $(OBJS)
	$(CC) $(CCFLAGS) -o tester $(OBJS)

Shape.o: Shape.cpp
	$(CC) $(CCFLAGS) -c Shape.cpp

tester.o: tester.cpp
	$(CC) $(CCFLAGS) -c tester.cpp

Triangle.o: Triangle.cpp
	$(CC) $(CCFLAGS) -c Triangle.cpp

Circle.o: Circle.cpp
	$(CC) $(CCFLAGS) -c Circle.cpp

Rectangle.o: Rectangle.cpp
	$(CC) $(CCFLAGS) -c Rectangle.cpp
	

clean:
	/bin/rm -f a.out $(OBJS) $(EXECS)
