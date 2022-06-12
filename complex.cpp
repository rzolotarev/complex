#include "complex.h"
#include <math.h>
#include <stdio.h>

Complex::Complex(double a_re, double a_im): re(a_re), im(a_im)
{
    p = new int[20];
}

Complex::Complex(double a_re): re(a_re), im(0.0)
{
    p = new int[20];
}

Complex::Complex(): re(0.0), im(0.0)
{
    printf("default constructor\n");
    p = new int[20];
}

Complex::Complex(const Complex &c): re(0.0), im(0.0)
{
    printf("copy constructor\n");
    p = new int[20];
    for(int i = 0; i < 20; i++)
        p[i] = c.p[i];
}

double Complex::get_re() const
{
    return re;
}

double Complex::get_im() const
{
    return im;
}

Complex::~Complex()
{
    printf("destructor for %f %f \n", re, im);
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

Complex operator-(const Complex &a, const Complex &b)
{
    return Complex(a.get_re() + b.get_re(), a.get_im() + b.get_im());
}