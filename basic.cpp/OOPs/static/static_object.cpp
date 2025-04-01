#include<iostream>
using namespace std;

class ABC {
    public:
    ABC() {
        cout << "constructor" << endl;
    }
    ~ABC() {
        cout << "distructor" << endl;
    }
};

int main() {
    if(true) {
        static ABC obj;
    }
    cout << "Main ends" << endl;
    return 0;
}