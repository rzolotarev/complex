complex.o: complex.cpp complex.h
	g++ -c complex.cpp -o complex.o

int_array.o: .\IntArray\int_array.cpp .\IntArray\int_array.h
	g++ -c .\IntArray\int_array.cpp -o int_array.o

prog: complex.o int_array.o
	g++ main.cpp complex.o int_array.o -o main