#include<iostream>
using namespace std;

int fun() {
    static int x = 0;
    cout << "x : " << x << endl;
    x++;
}

int main() {
    fun();
    fun();
    fun();
    return 0;
}