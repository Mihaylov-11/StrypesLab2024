program.o :
	g++ -c program.cpp -o program.o

swap.o :
	g++ -c swap.cpp -o swap.o

all : program.o swap.o
	g++ program.o swap.o -o program

clean: 
	rm -f *.o program