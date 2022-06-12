#include ".\complex.h"
#include <stdio.h>

int main()
{    
    Complex a(1.0, 1.0);
    Complex b(2.0, 2.0);
    Complex c(3.0, 3.0);
    Complex z = a + b + c;
    printf("end of expression\n");

    const Complex &k = 5 - 3;
    printf("operator- %f\n", k.get_re());
    return 0;    
};