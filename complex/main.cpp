#include <iostream>
#include "complex.hpp"

int main() {
   Complex f = Complex(5, -3);
   //Complex s = Complex(-2, -6);
   //s = s - f;
   //f /= s *= s;
   std::cout << f;
   return 0;
}
