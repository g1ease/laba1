all: aptest1

aptest1: prep.o menu.o main.o
	g++ prep.o menu.o main.o -o aptest1

prep.o: prep.cpp
	g++ -c prep.cpp

menu.o: menu.cpp
	g++ -c menu.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -rf *.o aptest1
    
