OBJECTS = main.o recursor.o
ANCILLARY = makefile
cc = g++ -c -g -Wall -ansi -pedantic -std=c++2a

p5: $(OBJECTS)
	g++ -o p5 $(OBJECTS)

main.o: main.cpp $(ANCILLARY)
	$(cc) main.cpp

recursor.o: recursor.cpp $(ANCILLARY)
	$(cc) recursor.cpp
