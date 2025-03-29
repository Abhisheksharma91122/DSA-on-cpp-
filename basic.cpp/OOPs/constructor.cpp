#include<iostream>
using namespace std;

class Student {
    public:
    // non-parameterized constructor
    Student() {
        cout << "HI I am constructor" << endl;
    }

    // parameterized constructor
    Student(string n) {
        name = n;
    }

    string name;
    string dept;
    string std;
    int rollno;

    void getInfo() {
        cout << name << endl;
        cout << dept << endl;
        cout << std << endl;
        cout << rollno << endl;
    }
};

int main() {
    Student s1("Abhishek Sharma");
    Student s2;
    s1.dept = "Computer Engineering";
    s1.rollno = 72;
    s1.std = "SY"; 

    s1.getInfo();
    return 0;
}