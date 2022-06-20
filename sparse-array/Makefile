CC = g++
sparse-array.o: sparse-array.cpp sparse-array.h
	$(CC) -c sparse-array.cpp -o sparse-array.o
sparse-array-provide.o: sparse-array-provide.cpp sparse-array.h
	$(CC) -c sparse-array-provide.cpp -o sparse-array-provide.o
prog: sparse-array.o sparse-array-provide.o
	$(CC) main.cpp sparse-array.o sparse-array-provide.o -o main