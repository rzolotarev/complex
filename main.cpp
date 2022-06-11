#include ".\complex.h"
#include <stdio.h>

int main()
{
    Complex *arr = new Complex[5];
    delete [] arr;
    return 0;    
};