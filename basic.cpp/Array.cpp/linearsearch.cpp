#include<iostream>
using namespace std;
int linearsearch(int arr[],int size , int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,45,25,65,78};
    int size = 5;
    int target = 455;
   
    cout<<"the value is : ";
    cout<<linearsearch(arr,size,target);
    
}