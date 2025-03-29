#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    string dept;
    int rollno;

    Student(string name, string dept, int rollno) {
        this->name = name;
        this->dept = dept;
        this->rollno = rollno;
    }

    Student(Student &orgobj) {

        cout << "custom copy constructor ...invoke \n" << endl;
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->rollno = orgobj.rollno;
    }
    void getInfo() {
        cout << name << endl;
        cout << dept << endl;
        cout << rollno << endl;
    }
};

int main() {
    
    Student s1("Abhishek Sharma", "Computer Engineering", 72);
    s1.getInfo();

    // Student s2(s1); // default copy constructor -invoke
    // s2.getInfo();

    Student s2(s1); // custom copy constructor -invoke
    s2.getInfo();
    return 0;
}