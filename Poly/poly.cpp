#include "poly.h"
#include <math.h>
#include <sstream>
#include <string>


using namespace std;

Poly::Poly(double new_x) {
    factor[0] = new_x;
}

double& Poly::operator[] (int power) {
    return factor[power];
}

double Poly::operator() (double val_x) {
    double val = 0;
    for(map<int, double>::const_iterator i = factor.begin(); i != factor.end(); ++i) {
        val += (*i).second * pow(val_x, (*i).first);
    }
    return val;
}

Poly operator+ (const Poly& poly1, const Poly& poly2) {
    Poly temp;
    for(map<int, double>::const_iterator i = poly1.factor.begin(); i != poly1.factor.end(); ++i) {
        temp.factor[(*i).first] = (*i).second;
    }
    for(map<int, double>::const_iterator i = poly2.factor.begin(); i != poly2.factor.end(); ++i) {
        temp.factor[(*i).first] += (*i).second;
    }
    return temp;
}

Poly operator- (const Poly& poly1, const Poly& poly2) {
    Poly temp;
    for(map<int, double>::const_iterator i = poly1.factor.begin(); i != poly1.factor.end(); ++i) {
        temp.factor[(*i).first] = (*i).second;
    }
    for(map<int, double>::const_iterator  i = poly2.factor.begin(); i != poly2.factor.end(); ++i) {
        temp.factor[(*i).first] -= (*i).second;
    }
    return temp;
}

Poly operator* (const Poly& poly1, const Poly& poly2){
    Poly temp;
    for(map<int, double>::const_iterator i = poly1.factor.begin(); i != poly1.factor.end(); ++i) {
        for(map<int, double>::const_iterator j = poly2.factor.begin(); j != poly2.factor.end(); ++j) {
          temp.factor[(*i).first * (*j).first] += (*i).second * (*j).second;
        }
    }
    return temp;
}

Poly Poly::operator- () const {
    Poly temp;
    for(map<int, double>::const_iterator i = factor.begin(); i != factor.end(); ++i) {
        temp.factor[(*i).first] = (*i).second * -1;
    }
    return temp;
}

std::ostream& operator<<(std::ostream &out, const Poly& poly) {
    string txt = "";
    map<int, double>::const_iterator i = poly.factor.end();
    --i;
    while (true) {
        stringstream txt_ss;
        if((double)(*i).second != 0) {
            txt_ss << (double)(*i).second;
            txt += txt_ss.str();
            txt_ss.str(string());
            if((int)(*i).first != 0) {
                if((int)(*i).first == 1) {
                    txt += "x";
                }
                else {
                    txt_ss << (int)(*i).first;
      					    txt += "x^" + txt_ss.str();
                }
            }
        }
        if(i == poly.factor.begin()) break;
        --i;
        if ((*i).second > 0 && txt != "") txt += "+";

    }
    if(txt == "") return out << "0";
	  return out << txt;
}
