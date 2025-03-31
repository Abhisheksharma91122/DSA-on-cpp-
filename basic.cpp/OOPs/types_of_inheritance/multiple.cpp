#include<iostream>
using namespace std;


class Student {
    public:
    
    string name;
    int age;
};

class Teacher {
    public:
    string subject;
    double salary;
};

class TA: public Student, public Teacher {
    public:

    void getInfo() {
        cout << "Name = " << name << endl;
        cout << "age = " << age << endl;
        cout << "subject = " <<subject << endl;
        cout << "salary = " << salary << endl;
    }
};

int main() {
    TA t1;
    t1.name = "Abhishke";
    t1.age = 20;
    t1.subject = "Maths";
    t1.salary = 45000;
    t1.getInfo();
}