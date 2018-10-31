//
//  complex.cpp
//  CPP
//
//  Created by Dawid Ćwiek on 24.10.2018.
//  Copyright © 2018 Dawid Ćwiek. All rights reserved.
//

#include "complex.hpp"
#include <math.h>

Complex::Complex(double real, double imag) {
    this->real = real;
    this->imag = imag;
}

double Complex::getReal() {
    return real;
}

double Complex::getImag() {
    return imag;
}

void Complex::setReal(double setreal) {
    this->real = setreal;
}

void Complex::setImag(double setimag) {
    this->imag = setimag;
}

double Complex::getAmplitude() {
    if (real < 0) {
        return atan(real/imag);
    }
    if (real > 0) {
        return atan(real / imag) + M_PI;
    }
    if (real == 0 && imag < 0) {
        return -(M_PI / 2);
    }
    if(real == 0 && imag > 0) {
        return M_PI / 2;
    }
    else {
        return 0;
    }
}

double Complex::getPhaze() {
    return sqrt((real * real) + (imag * imag));
}

Complex Complex::operator+(Complex& comp){
	Complex n_c;
	n_c.setReal(this->real + comp.getReal());
	n_c.setImag(this->imag + comp.getImag());
	return n_c;
}
