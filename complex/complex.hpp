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
public:
    friend Complex operator+(double d_num, const Complex& num);
    friend Complex operator-(double d_num, const Complex& num);
    friend Complex operator*(double d_num, const Complex& num);
    friend Complex operator/(double d_num, const Complex& num);
    friend bool operator==(double d_num, const Complex& num);

	Complex(double real = 0, double imag = 0);
    double getReal() const;
    double getImag() const;
    void setReal(double number);
    void setImag(double number);
    double getAmplitude();
    double getPhaze();
    Complex operator+(const Complex& num) const;
    Complex operator-(const Complex& num) const;
    Complex operator*(const Complex& num) const;
    Complex operator/(const Complex& num) const;
    Complex& operator+=(const Complex& num);
    Complex& operator-=(const Complex& num);
    Complex& operator*=(const Complex& num);
    Complex& operator/=(const Complex& num);
    bool operator==(const Complex& num);
    friend std::ostream &operator<<(std::ostream&, const Complex& num);
};
#endif /* complex_hpp */
