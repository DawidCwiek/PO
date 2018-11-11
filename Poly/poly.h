#ifndef POLY_H_
#define POLY_H_
#include <iostream>
#include <map>

class Poly {
private:
    double x;
public:
  Poly(double new_x = 0);
  std::map<int, double> factor;
  double& operator[] (int power);
  double operator() (double val_x);
  Poly operator+ (const Poly& poly) const;
  Poly operator- (const Poly& poly) const;
  Poly operator* (const Poly& poly) const;
  friend Poly operator- (const Poly& poly);
  friend std::ostream &operator<< (std::ostream&, const Poly& poly);
};

#endif
