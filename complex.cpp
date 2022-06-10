#include ".\complex.h"

class Complex {
    double re, im;
    public:
        Complex(double a_re, double a_im) {
            re = a_re; im = a_im;
        }
        Complex() {
            re = 0; im = 0;
        }

};