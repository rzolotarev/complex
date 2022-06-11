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
    ~Complex();
    double modulo() const;
    double modulo(Complex c) const;
    Complex operator+(const Complex &c) const;

};
#endif
