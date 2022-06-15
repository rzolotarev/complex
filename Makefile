CC = g++
complex.o: complex.cpp complex.h
	$(CC) -c complex.cpp -o complex.o

int_array.o: .\IntArray\int_array.cpp .\IntArray\int_array.h
	$(CC) -c .\IntArray\int_array.cpp -o int_array.o

my_int.o: .\MyInt\my_int.h
	$(CC) -c .\MyInt\my_int.h -o my_int.o

prog: complex.o int_array.o
	$(CC) main.cpp complex.o int_array.o -o main