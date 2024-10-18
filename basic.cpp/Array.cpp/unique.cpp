#include<iostream>
using namespace std;
int unique(int arr[], int sz){
    int num;
    int count = 0;
    for(int i=0;i<sz;i++){
        num = i;
        for(int j=0;j<sz;j++){
        if(arr[num] != arr[j]){
            count++;
        }
        }
    }
    return count;
}
int main(){
    int arr[]={1,2,3,4,1,2,3};
    int sz = 7;
    
    // if(unique(arr,sz)<1){
    //   cout<<"unique element is found!";  
    // }
    cout<<unique(arr,sz);
}
