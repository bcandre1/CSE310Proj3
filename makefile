OBJS	= CSE310Proj3.o util.o algorithm.o stack.o
SOURCE	= CSE310Proj3.cpp util.cpp algorithm.cpp stack.cpp
HEADER	= util.h algorithm.h stack.h
OUT	= int
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

CSE310Proj3.o: CSE310Proj3.cpp
	$(CC) $(FLAGS) CSE310Proj3.cpp 

util.o: util.cpp
	$(CC) $(FLAGS) util.cpp 

algorithm.o: algorithm.cpp
	$(CC) $(FLAGS) algorithm.cpp 

stack.o: stack.cpp
	$(CC) $(FLAGS) stack.cpp 


clean:
	rm -f $(OBJS) $(OUT)