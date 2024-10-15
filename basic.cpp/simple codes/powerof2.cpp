#include<iostream>
#include<cmath>
using namespace std;

// bool powerof2(int a){

//     if(a<=0){
//         return false;
//     }

//     while(a>1){
//         if(a % 2 != 0){
//             return false ;
//         }
//         a = a/2;
//     }
    
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     if(powerof2(n)){
//         cout<<"the number is power of 2 ";
//     }else{
//         cout<<"the number is not a power of 2";
//     }
    
// }

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool flag = 0 ; 
    for(int i=0;i<n/2+1;i++){
        if(n==1){
            flag = 0;
            break;
        }
        if(n == pow(2,i)){
            flag = 1;
            break;
        }else {
            flag = 0;
        }
    }
    if(flag == 1){
        cout<<"enter number is the power of 2";
    }else{
        cout<<"the enter number is not a power of 2";
    }

}