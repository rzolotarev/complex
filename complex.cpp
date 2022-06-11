#include "complex.h"
#include <math.h>
#include <stdio.h>

Complex::Complex(double a_re, double a_im)
{
    re = a_re; im = a_im;
}

Complex::Complex()
{
    printf("default constructor\n");
    re = 0; im = 0;
}

Complex::~Complex()
{
    printf("destructor\n");
}

double Complex::modulo() const
{
    return sqrt(re*re + im*im);
}

double Complex::modulo(Complex c) const
{
    return sqrt(re*c.re + im*c.im);
}

Complex Complex::operator+(const Complex &c) const
{
    return Complex(re+c.re, im + c.im);     
}