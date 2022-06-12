#include "complex.h"
#include <math.h>
#include <stdio.h>

Complex::Complex(double a_re, double a_im)
{
    p = new int[20];
    re = a_re; im = a_im;
}

Complex::Complex(double a_re)
{
    p = new int[20];
    re = a_re;
    im = 0.0;
}

Complex::Complex()
{
    printf("default constructor\n");
    p = new int[20];
    re = 0; im = 0;
}

Complex::Complex(const Complex &c)
{
    printf("copy constructor\n");
    re = 0; im = 0;
    p = new int[20];
    for(int i = 0; i < 20; i++)    
        p[i] = c.p[i];
}

Complex::~Complex()
{
    printf("destructor %f %f \n", re, im);
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
    printf("operator+\n");
    return Complex(re+c.re, im + c.im);
}