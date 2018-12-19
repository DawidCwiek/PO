#include "employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string newName, string newPosition, unsigned int newAge) {
    name = newName;
    position = newPosition;
    age = newAge;
}

std::ostream & operator<< (std::ostream &out, const Employee &first) {
    out << "pracownik: " << first.name << endl;
    out << "stanowisko: " << first.position << endl;
    out << "wiek: " << first.age << endl;
    return out;
}

Employee& Employee::operator=(const Employee &first) {
    name = first.name;
    position = first.position;
    age = first.age;
    return *this;
}
