#include <iostream>
#include "complex.hpp"

int main() {
   Complex a = Complex(4, 1);
   Complex b = Complex(3, 2);
   Complex c = Complex(2, 3);

   a *= b *= c;
   std::cout<< "urojone: "  << a << " " << b << " " << c << "\n";

   Complex d = Complex(4, 1);
   Complex e = Complex(3, 2);
   Complex f = Complex(2, 3);

   (d *= e) *= f;
   std::cout<< "urojone: "  << d << " " << e << " " << f << "\n";

   Complex x = Complex(2, 2);
   Complex y = Complex(2, -2);
   Complex z = Complex(-2, 2);
   Complex i = Complex(-2, -2);

   std::cout<< "Phaze: " << x.getPhaze() << "\n";
   std::cout<< "Phaze: " << y.getPhaze() << "\n";
   std::cout<< "Phaze: " << z.getPhaze() << "\n";
   std::cout<< "Phaze: " << i.getPhaze() << "\n";
   return 0;
}
