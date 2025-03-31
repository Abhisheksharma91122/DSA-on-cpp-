#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    double* cgpaptr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaptr = new double;
        *(cgpaptr) = cgpa;
    }

    ~Student() {
        cout << "Hi, I delete everything" << endl;
        delete cgpaptr;
    }

    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "cgpa : " << *cgpaptr << endl;
    }
};

int main() {
    Student s1("Abhishek", 9.5);
    s1.getInfo();
}