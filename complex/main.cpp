#include <iostream>
#include "complex.hpp"

int main() {
   Complex f = Complex(5, -3);
   Complex s = Complex(-2, -6);
   Complex e = Complex(4, 4);
   f += s += e;
   std::cout<< f << "\n" << s << "\n" << e;
   return 0;
}
