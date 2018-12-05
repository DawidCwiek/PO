#include "rcstring.h"

int main() {
    /*rcstring a, b, c, x;
    a = "bk 10";
    b = "ala MA kota";
    cout << a << " " << b << endl; // 10 ala ma kota
    c = a + b;
    cout << c << endl; // 10ala ma kota
    c = a + rcstring(" ") + b;
    cout << c << endl << endl << endl; //10 ala ma kota

    cout << "number = " << a.convertToInteger() << endl;
    b.convertToLowercase();
    cout << "lower = " << b << endl;
    x = b.generateSubstring(5);
    cout << "3 fun = " << x << endl;

    cout<< endl << endl;
    rcstring d("a");
    cout << d <<endl; //a
    d += "ula";
    cout << d << endl; //aula
    d += "15";
    cout << d << endl; //aula15

    cout << d[3] << endl; //a
    d[3] = 'b';

    cout << d << endl; //aulb15
    d[2] = d[1] = d[0];

    cout << d << endl; //aaab15*/
    rcstring A, B, C;
    A = "Ala Ma Kota";
    B = C = A;
    A.convertToLowercase();
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    return 0;
}
