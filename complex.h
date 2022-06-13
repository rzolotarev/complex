#ifndef COMPLEX_H_SENTRY
#define COMPLEX_H_SENTRY
class Complex {
private:
    double re, im;
    int *p;
public:
    Complex();
    Complex(double, double);
    Complex(double a_re);
    Complex(const Complex &c);    
    double modulo() const;
    double get_re() const;
    double get_im() const;
    double modulo(Complex c) const;
    Complex& operator=(const Complex &);
    void operator+=(const Complex &);
    void operator=(double);
    Complex operator*(const Complex &) const;
    friend Complex operator+(const Complex &, const Complex &);
    friend Complex operator-(const Complex &, const Complex &);
    friend Complex operator/(const Complex &a, const Complex &b);
    ~Complex();
};
#endif
