#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        Student(string name = "Unknown") {
            this->name = name;
        }
};

int main()
{
    Student s1("John");
    Student s2;
    cout << s1.name << endl;
    cout << s2.name << endl;


    return 0;
}
