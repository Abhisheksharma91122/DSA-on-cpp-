#include<iostream>
using namespace std;
int main(){
    int a  = 7;
    int* ptr = &a;
    int** ptr2 = &ptr;
    cout<<&ptr<<endl;
    cout<<ptr2;
}