complexTarget: complex.cpp complex.h
	g++ -c complex.cpp -o complex.o

intArrayTarget: .\IntArray\int_array.cpp .\IntArray\int_array.h
	g++ -c .\IntArray\int_array.cpp -o .\IntArray\int_array.o

prog: complexTarget intArrayTarget
	g++ main.cpp complex.cpp .\IntArray\int_array.cpp -o main