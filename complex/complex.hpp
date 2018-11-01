//
//  complex.hpp
//  CPP
//
//  Created by Dawid Ćwiek on 24.10.2018.
//  Copyright © 2018 Dawid Ćwiek. All rights reserved.
//

#ifndef complex_hpp
#define complex_hpp

#include <stdio.h>

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double real = 0, double imag = 0);
    double getReal();
    double getImag();
    void setReal(double number);
    void setImag(double number);
    double getAmplitude();
    double getPhaze();
    Complex operator+(Complex& );
    Complex operator-(Complex& );
    Complex operator*(Complex& );
    Complex operator/(Complex& );
};
#endif /* complex_hpp */
