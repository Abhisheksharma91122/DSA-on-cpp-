#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60};
    int size = 6;
    int pro = 1;
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
        pro *= arr[i];
    }
    cout<<"the sum is = "<<sum<<endl;
    cout<<"the product is = "<<pro<<endl;
}