#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    double* cgpaprt;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaprt = new double;
        *(cgpaprt) = cgpa;
    }

    Student(Student &org) {
        this->name = org.name;
        cgpaprt = new double;
        *cgpaprt = *org.cgpaprt;
        // cgpaprt = org.cgpaprt;
    }

    void Info() {
        cout << "Name : " << name << endl;
        cout << "cgpa : " << *(cgpaprt) << endl;
    }
};

int main() {
    Student s1("Abhishek Sharma", 9.5);
    s1.Info();
    Student s2(s1);
    *(s1.cgpaprt) = 9.9;
    s1.Info();
    s2.name = "Neha Sharma";
    s2.Info();
    return 0;
}