#include <iostream>
#include "complex.hpp"

int main() {
   Complex f = Complex(4, 0);
   Complex s = Complex(3, 0);
   Complex e = Complex(2, 0);
   double a = 4, b = 3, c = 2;
   f *= s *= e;
   (a *= b) *= c;
   std::cout<< "urojone: "  <<f << " " << s << " " << e << "\n";
   std::cout<< "double: " <<a << " " << b << " " << c << "\n";
   return 0;
}
