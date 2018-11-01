//
//  main.cpp
//  CPP
//
//  Created by Dawid Ćwiek on 17.10.2018.
//  Copyright © 2018 Dawid Ćwiek. All rights reserved.
//

#include <iostream>
#include "complex.hpp"

int main() {
   Complex f = Complex(5, -3);
   Complex s = Complex(-2, -6);
   //s = s - f;
   f = f / s;
   printf("f = %lf + i%lf", f.getReal(), f.getImag());
   return 0;
}
