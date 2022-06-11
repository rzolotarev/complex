#ifndef COMPLEX_H_SENTRY
#define COMPLEX_H_SENTRY
class Complex {
private:
    double re, im;
public:
    Complex();
    Complex(double a_re, double a_im);
    Complex(double a_re){
        re = a_re;
        im = 0.0;
    }
    double modulo();
    double modulo(Complex c);
    Complex operator+(const Complex &c);

};
#endif
