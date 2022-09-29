Node: Node.o
	g++ -g Node.o -o Node

main: main.o Node.o bst.o
	g++ -g main.o Node.o bst.o -o main

main.o: main.cpp bst.h Node.h
	g++ -g -c main.cpp

bst: Node.o bst.o 
	g++ -g Node.o bst.o -o bst

Node.o: Node.cpp
	g++ -g -c Node.cpp

bst.o: bst.cpp Node.h
	g++ -g -c bst.cpp

run: main
	./main

debug: Node
	gdb Node

clean: 
	rm main
	rm *.o
