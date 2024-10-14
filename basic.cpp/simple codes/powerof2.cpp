#include<iostream>
using namespace std;
bool powerof2(int a){

    if(a<=0){
        return false;
    }

    while(a>1){
        if(a % 2 != 0){
            return false ;
        }
        a = a/2;
    }
    
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(powerof2(n)){
        cout<<"the number is power of 2 ";
    }else{
        cout<<"the number is not a power of 2";
    }
    
}

