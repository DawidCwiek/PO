#include <string>
using namespace std;

class Employee
{
public:
    string name;
    string position;
    unsigned int age;
    Employee(string newName = "", string newPosition = "", unsigned int newAge = 0);
    friend std::ostream & operator<< (std::ostream &out, const Employee &employee);
    Employee& operator=(const Employee &employee);
};
