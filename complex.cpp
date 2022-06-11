#include "complex.h"
#include <math.h>

Complex::Complex(double a_re, double a_im)
{
    re = a_re; im = a_im;
}

Complex::Complex()
{
    re = 0; im = 0;
}

double Complex::modulo()
{
    return sqrt(re*re + im*im);
}