#include<iostream>
using namespace std;
int main(){
    int a = 20;
    int* ptr = &a;
    int** ptr2 = &ptr;

    cout<<*ptr<<endl;
    cout<<*(&a)<<endl;
    cout<<*ptr2<<endl;
    cout<<**ptr2<<endl;
}