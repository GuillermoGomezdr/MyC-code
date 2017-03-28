tu_nombre: main.o interface.o
	g++ $^ -o tu_nombre
#El $^ equivale a -> main.o e interface.o


main.o: main.cpp interface.h
	g++ -c main.cpp

interface.o: interface.cpp interface.h
	g++ -c interface.cpp

