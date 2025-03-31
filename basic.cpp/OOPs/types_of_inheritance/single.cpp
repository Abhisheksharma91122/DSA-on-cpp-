#include<iostream>
using namespace std;

class Person {
    public:

    string name;
    int age;

    Person() {
        cout << "I am constructor of parent class" << endl;
    }
};

class Student: public Person {
    public:
    int rollno;

    Student() {
        cout << "I am constructor of derived class" << endl;
    }

    void getInfo() {
        cout << "Name = " << name << endl;
        cout << "age = " << age << endl;
        cout << "rollno = " << rollno << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Abhishke";
    s1.age = 20;
    s1.rollno = 72;
    s1.getInfo();
}