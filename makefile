todo: main.o paga.o
	g++ -o main main.o paga.o
main.o: main.cpp
	g++ -c main.cpp
paga.o: paga.h paga.cpp
	g++ -c paga.cpp
limpiar:
	rm*.o
	rm main