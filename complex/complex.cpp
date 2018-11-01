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

Complex Complex::operator+(Complex& num) {
	Complex temp;
	temp.setReal(this->real + num.getReal());
	temp.setImag(this->imag + num.getImag());
	return temp;
}

Complex Complex::operator-(Complex& num) {
  Complex temp;
  temp.setReal(this->real - num.getReal());
  temp.setImag(this->imag - num.getImag());
  return temp;
}

Complex Complex::operator*(Complex& num) {
  Complex temp;
  temp.setReal(this->real * num.getReal() - this->imag * num.getImag());
  temp.setImag(this->real * num.getImag() + this->imag * num.getReal());
  return temp;
}

Complex Complex::operator/(Complex& num) {
  Complex temp;
  double denominator = num.getReal() * num.getReal() + num.getImag() * num.getImag();
  temp.setReal((this->real * num.getReal() + this->imag * num.getImag() ) / denominator);
  temp.setImag((this->imag * num.getReal() - this->real * num.getImag() ) / denominator);
  return temp;
}
