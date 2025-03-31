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

class Teacher: public Person {
    public:
    string subject;
    double salary;
};


int main() {
    Student s1;
    s1.name = "Abhishek";
    Teacher t1;
    t1.name = "Abhishek Sharma";

    cout << s1.name << endl;
    cout << t1.name << endl;
}