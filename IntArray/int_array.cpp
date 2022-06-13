#include "int_array.h"
#include <stdio.h>

int& IntArray::operator[](unsigned int required_index)
{
    if (required_index >= size){
        Resize(required_index);
    }

    return p[required_index];
};

void IntArray::Resize(unsigned int required_size)
{
    unsigned int new_size = size;
    while (new_size <= required_size)
        new_size *= 2;

    int *new_array = new int[new_size];
    for(int i = 0; i < size; i++)
        new_array[i] = p[i];
    delete [] p;
    p = new_array;
    size = new_size;    
}