#include ".\complex.h"
#include ".\IntArray\int_array.h"
#include ".\operator_arrow\price.h"
#include <stdio.h>

int main()
{            
    PricePointer p;
    p = new Price;    
    p->min = 25;
    printf("min %d\n", p->min);
    (*p).max = 30;
    printf("max %d\n", p->max);    
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