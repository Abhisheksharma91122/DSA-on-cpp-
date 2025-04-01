#include<iostream>
using namespace std;

class Parent {
    public:
    void getInfo() {
        cout << "Parent class" << endl;
    }
    virtual void Hello() {
        cout << "Hello from parent" << endl;
    }
};

class Child: public Parent {
    public:
    void getInfo() {
        cout << "Child class" << endl;
    }
    void Hello() {
        cout << "Hello from Child" << endl;
    }
};

int main() {
    Child c1;
    c1.Hello();
    return 0;
}