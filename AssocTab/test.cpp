#include "assoctab.h"
#include <iostream>
using namespace std;

int main() {
    assocTab a1, a2;
    a1["ala"] = 1;
    a1["ola"] = 2;
    cout << a1["ala"] << " " << a1["ola"] << " " << a1["ula"] << endl;
    a2 = a1;
    a2["ula"]++;
    cout << a2["ala"] << " " << a2["ola"] << " " << a2["ula"] << endl;

    secoundAssocTab b1, b2;
    b1["ala"] = 3;
    b1["ola"] = 4;
    cout << b1["ala"] << " " << b1["ola"] << " " << b1["ula"] << endl;
    b2 = b1;
    b2["uLa"]++;
    cout << b2["alA"] << " " << b2["oLa"] << " " << b2["ulA"] << endl;
    cout << b2["ALA"] << " " << b2["olA"] << " " << b2["Ula"] << endl;
}
