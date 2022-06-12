#ifndef COMPLEX_H_SENTRY
#define COMPLEX_H_SENTRY
class Complex {
private:
    double re, im;
    int *p;
public:
    Complex();
    Complex(double a_re, double a_im);
    Complex(double a_re);
    Complex(const Complex &c);    
    double modulo() const;
    double modulo(Complex c) const;
    Complex operator+(const Complex &c) const;
    ~Complex();
};
#endif
