#include<iostream>
using namespace std;
int nosum(int a){
    int sum=0;
    int last ;
    while(a>0){
        last = a%10;
        a = a/10;
        sum = sum + last ;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<nosum(n);
}