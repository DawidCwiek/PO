#include "poly.h"
#include <math.h>

Poly::Poly(double new_x) {
    factor[0] = new_x;
}

double& Poly::operator[] (int power) {
    return factor[power];
}

double Poly::operator() (double val_x) {
    double val = 0;
    for(auto i = factor.begin(); i != factor.end(), ++i) {
        val += (*i).second * pow(val_x, (*i).first);
    }
    return val;
}

Poly Poly::operator+ (const Poly& poly) {
    Poly temp;
    for(auto i = factor.begin(); i != factor.end(); ++i) {
        temp.factor[(*i).first] = (*i).second;
    }
    for(auto i = poly.factor.begin(); i != poly.factor.end(); ++i) {
        temp.factor[(*i).first] += (*i).second;
    }
    return temp;
}

Poly Poly::operator- (const Poly& poly) {
    Poly temp;
    for(auto i = factor.begin(); i != factor.end(); ++i) {
        temp.factor[(*i).first] = (*i).second;
    }
    for(auto i = poly.factor.begin(); i != poly.factor.end(); ++i) {
        temp.factor[(*i).first] -= (*i).second;
    }
    return temp;
}

Poly Poly::operator* (const Poly& poly) {
    Poly temp;
    for(auto i = factor.begin(); i != factor.end(); ++i) {
        for(auto j = poly.factor.begin(); j != poly.factor.end(); ++j) {
          temp.factor[(*i).first * (*j).first] = (*i).second * (*j.second);
        }
    }
    return temp;
}

Poly operator- (const Poly& poly) {
    Poly temp;
    for(auto i = poly.factor.begin(); i != poly.factor.end(); ++i) {
        temp.factor[(*i).first] = (*i).second * -1;
    }
    return temp;
}

std::ostream& operator<<(std::ostream &out, const Poly& poly) {
    string txt = "";
    for(auto i = poly.factor.end(); i < poly.factor.begin();) {
        std::stringstream txt_ss;
        if((*i).second != 0) {
            txt_ss << (*i).second;
            txt += txt_ss.str();
            if((*i).first == 0) {
                txt += "x";
            }
            else {
                txt_ss << (*i).first;
  					    txt += "x^" + txt_ss.str();
            }
        --i;
        if ((*i).second > 0 && txt != "") txt += "+";
        else if ((*i).second < 0 && txt != "") txt += "-";
        }
    }
    if(txt == "") return out << "0";
	  return out << txt;
}
