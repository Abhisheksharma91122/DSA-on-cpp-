#include<iostream>
using namespace std;
int dectobinary(int a){
    int sum = 0; 
    int power = 1;
    while(a>0){
        int rem = a%2;
        a = a/2;
        sum = sum + (rem*power);
        power *= 10;
    }
    return sum;

}
int main(){
    int n;
    cout<<"Enter the vlaue you want to convert into binary :";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cout<<dectobinary(i)<<endl;
    }
    
}