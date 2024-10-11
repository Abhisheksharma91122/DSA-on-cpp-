#include<iostream>
using namespace std;
void prime(int b){
    for(int i=2;i<=b;i++){
        int flag = 0;
        for(int j=2;j<=i/2;j++){
            if(i%j == 0){
                flag =1;
                break;
            }
        }
        if(flag == 0){
            cout<<i<<" ";
        }
    }
        
}
int main(){
    int n;
    cout<<"Enter the value of  n : ";
    cin>>n;
    prime(n);
    return 0;
}