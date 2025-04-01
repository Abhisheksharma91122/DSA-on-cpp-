#include<iostream>
using namespace std;

class Show {
    public:
    Show() {
        cout << "non-parameterized\n";
    }
    Show(string name) {
        cout << "Name : " << name << endl;
    }
};

int main() {
    Show s1("tony stark");
}