#include<iostream>
using namespace std;
void prime(int a){
    int boolean =1;
    for(int i=2;i<=a/2;i++){
        if(a%i == 0){
            boolean = 0;
            break;
        }
    }
    if(boolean == 0){
        cout<<"The number is not prime number !!";
    }else {
        cout<<"The number is prime number !!";
    }
}
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    prime(n);
    return 0;
}