CC = g++
complex.o: complex.cpp complex.h
	$(CC) -c complex.cpp -o complex.o

int_array.o: ./IntArray/int_array.cpp ./IntArray/int_array.h
	$(CC) -c ./IntArray/int_array.cpp -o int_array.o

my_int.o: ./MyInt/my_int.h
	$(CC) -c ./MyInt/my_int.h -o my_int.o

price_pointer.o: ./operator_arrow/price_pointer.cpp ./operator_arrow/price.h
	$(CC) -c ./operator_arrow/price_pointer.cpp

prog: complex.o int_array.o price_pointer.o
	$(CC) main.cpp complex.o int_array.o price_pointer.o -o main