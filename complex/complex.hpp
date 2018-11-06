//
//  complex.hpp
//  CPP
//
//  Created by Dawid Ćwiek on 24.10.2018.
//  Copyright © 2018 Dawid Ćwiek. All rights reserved.
//

#ifndef complex_hpp
#define complex_hpp

#include <iostream>

class Complex {
private:
    double real;
    double imag;
    friend Complex operator+(int, Complex& );
    friend Complex operator+(Complex&, int );
    friend Complex operator-(int, Complex& );
    friend Complex operator-(Complex&, int );
    friend Complex operator*(int, Complex& );
    friend Complex operator*(Complex&, int );
    friend Complex operator/(int, Complex& );
    friend Complex operator/(Complex&, int );
    friend bool operator==(int, Complex& );
    friend bool operator==(Complex&, int );
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
    Complex& operator+=(Complex& );
    Complex& operator-=(Complex& );
    Complex& operator*=(Complex& );
    Complex& operator/=(Complex& );
    bool operator==(Complex& );
    friend std::ostream &operator<<(std::ostream&, Complex& );
};
#endif /* complex_hpp */
