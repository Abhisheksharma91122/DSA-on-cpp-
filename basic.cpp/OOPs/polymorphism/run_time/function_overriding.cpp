#include<iostream>
using namespace std;

class Parent {
    public:
    void getInfo() {
        cout << "Parent class" << endl;
    }
};

class Child: public Parent {
    public:
    void getInfo() {
        cout << "Child class" << endl;
    }
};

int main() {
    Parent p1;
    p1.getInfo();
    return 0;
}