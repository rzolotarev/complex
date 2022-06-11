#include ".\complex.h"
#include <stdio.h>

int main()
{
    Complex co1(2.0, 1.0);
    Complex co2(2.0, 1.0);
    Complex res= co1 + co2;
    printf("%f\n",res.modulo());

    printf("conversion constructor\n %f\n", co1.modulo(3.0));
    Complex c[50];    
};