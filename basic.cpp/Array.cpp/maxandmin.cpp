#include<iostream>
using namespace std;
int main(){
    int arr[]={10,22,45,56,-89};
    int size = 5;
    int smallest  = INT8_MIN;
    for(int i=0;i<size ; i++){
        if(arr[i]>smallest){
            smallest = i;
        }
    }
    cout<<"biggest = "<<smallest<<endl;
}