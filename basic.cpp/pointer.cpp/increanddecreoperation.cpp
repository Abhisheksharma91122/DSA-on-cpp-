#include<iostream>
using namespace std;
int main(){
    int a =20;
    int* ptr =&a;
    ptr++; // incremented by 4bit in memory
    cout<<&a<<endl;
    cout<<ptr<<endl;
}