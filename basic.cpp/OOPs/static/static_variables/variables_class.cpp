#include<iostream>
using namespace std;

class Print {
    public:
    static int x;
    void incr() {
        x++;
    }
    
};

int main() {
    Print p1;
    Print p2;
    p1.x = 100;
    p2.x = 200;
    p1.incr();
    p1.incr();
    cout << p1.x << endl;
    p2.incr();
    cout << p2.x << endl;
}