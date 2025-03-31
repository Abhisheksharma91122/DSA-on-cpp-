#include<iostream>
using namespace std;

class Person {
    public:

    string name;
    int age;
};

class Student: public Person {
    public:
    int rollno;

};

class GradeStudent: public Student {
    public:
    string researchSubject;

    void getInfo() {
        cout << "Name = " << name << endl;
        cout << "age = " << age << endl;
        cout << "rollno = " << rollno << endl;
        cout << "researchSubject = " << researchSubject << endl;
    }
};

int main() {
    GradeStudent g1;
    g1.name = "Abhishke";
    g1.age = 20;
    g1.rollno = 72;
    g1.researchSubject = "Free Energy";
    g1.getInfo();
}