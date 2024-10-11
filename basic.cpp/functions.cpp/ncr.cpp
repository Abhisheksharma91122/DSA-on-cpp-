#include<iostream>
using namespace std;
int fact(int a){
    int fac = 1;
    for(int i=1;i<=a;i++){
        fac = fac * i;
    }
    return fac;
}
int NCR(int n, int r){
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr = fact(n-r);
    return fact_n / (fact_r * fact_nmr);
}
int main(){
    int n,r;
    cout<<"Enter the value of n and r :";
    cin>>n>>r;
    cout<<NCR(n,r);
    
}