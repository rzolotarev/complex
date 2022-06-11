#include "complex.h"
#include <math.h>
#include <stdio.h>

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

double Complex::modulo(Complex c)
{
    return sqrt(re*c.re + im*c.im);
}

Complex Complex::operator+(Complex c){
    Complex res(re+c.re, im + c.im);
    return res;
}