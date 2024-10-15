#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int rem = 1;
    int sum = 0;
    int pow = 1;
    while(n>0){
        rem = n%10;
        sum = sum * 10 + rem;
        n = n/10;
    }
    cout<<sum;
}