#include ".\complex.h"
#include ".\IntArray\int_array.h"
#include ".\MyInt\my_int.h"
#include <stdio.h>

void non_const(MyInt a)
{
    a.set_i(10);
    printf("aha %d\n", a.get_i());
}

int main()
{    
    // int i = 4;
    // int b = i++;
    // =16;
    // MyInt(5) = 7;
    MyInt test(4);
    ++test=16;

    non_const(MyInt(5));
    
    // printf("test %d\n", test.get_i());
    // Complex z = a + b + c;
    // printf("end of expression\n");

    // const Complex &k = 5 - 3;
    // printf("operator- %f\n", k.get_re());

    IntArray ia;
    ia[500] = 10;
    ia[500]++;
    printf("array %d\n", ia[500]);
    return 0;    
};