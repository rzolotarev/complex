#ifndef COMPLEX_H_SENTRY
#define COMPLEX_H_SENTRY
class Complex {
private:
    double re, im;
public:
    Complex();
    Complex(double a_re, double a_im);        
    double modulo();
};
#endif
