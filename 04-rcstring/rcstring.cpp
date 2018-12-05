#include "rcstring.h"

int main() {
<<<<<<< HEAD
    /*rcstring a, b, c, x;
=======
   /* rcstring a, b, c, x;
>>>>>>> 6b58b302a7662de4055219558d469765394d2432
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
<<<<<<< HEAD
    rcstring A, B, C;
    A = "Ala Ma Kota";
    B = C = A;
    A.convertToLowercase();
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
=======
   rcstring A, B, C;
   A = "Ala Ma Kota";
   C = B = A;
   A.convertToLowercase();
   
   cout << A << endl;
   cout << B << endl;
   cout << C << endl;
>>>>>>> 6b58b302a7662de4055219558d469765394d2432
    return 0;
}
