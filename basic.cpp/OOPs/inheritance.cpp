#include<iostream>
using namespace std;

class Person {
    public:

    string name;
    int age;

    Person(string name, int age) {
        cout << "I am constructor of parent class" << endl;
        this->name = name;
        this->age = age;
    }
};

class Student: public Person {
    public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age) {
        cout << "I am constructor of derived class" << endl;
        this->rollno = rollno;
    }

    void getInfo() {
        cout << "Name = " << name << endl;
        cout << "age = " << age << endl;
        cout << "rollno = " << rollno << endl;
    }
};

int main() {
    Student s1("Abhishek Sharma", 20, 72);

    s1.getInfo();
}