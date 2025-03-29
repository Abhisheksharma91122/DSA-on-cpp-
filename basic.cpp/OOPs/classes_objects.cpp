#include<iostream>
using namespace std;

class Teacher {
    public:

    // properties/ attributes
    string name;
    string subject;
    string dept;
    double salary;

    // methods/ member function
    void changeDept(string newDept) {
        dept = newDept;
    }
    // setter
    void setSalary(double s) {
        salary = s;
    }
    // getter
    double getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1;
    t1.name = "Abhishek Sharma";
    t1.subject = "Maths";
    t1.dept = "Computer Engineering";
    t1.setSalary(2500000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
}