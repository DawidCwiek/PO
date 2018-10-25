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
    ~Complex();
    double getReal();
    double getImag();
    double getAmplitude();
    double getPhaze();
    Complex operator+= (const Complex number);
    Complex operator-= (const Complex number);
    Complex operator*= (const Complex number);
    Complex operator/= (const Complex number);
    friend Complex operator+ (const Complex first, const Complex secound);
    friend Complex operator- (const Complex first, const Complex secound);
    friend Complex operator* (const Complex first, const Complex secound);
    friend Complex operator/ (const Complex first, const Complex secound);
};

#endif /* complex_hpp */
