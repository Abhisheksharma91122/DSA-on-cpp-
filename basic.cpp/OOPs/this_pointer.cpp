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

    void getInfo() {
        cout << name << endl;
        cout << dept << endl;
        cout << rollno << endl;
    }
};

int main() {
    
    Student s1("Abhishek Sharma", "Computer Engineering", 72);
    s1.getInfo();

    return 0;
}