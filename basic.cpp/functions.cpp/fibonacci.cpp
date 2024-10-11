#include<iostream>
using namespace std;
void fibo(int a){
    int t1=0, t2=1;
    int nextterm =0;
    for(int i=0;i<a;i++){
        if(i==0 || i==1){
            cout<<i<<" "; 
            continue;
        }
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm ; 
        cout<<nextterm<<" ";
    }
}
int main(){
    int n ;
    cout<<"Enter the value of n : ";
    cin>>n;
    fibo(n);
}