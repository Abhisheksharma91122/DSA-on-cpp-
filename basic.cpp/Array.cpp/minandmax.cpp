#include<iostream>
using namespace std;

void re(int arr[], int sz){
int st = 0 , end = sz-1;
while(st<end){
    if(arr[st]!=arr[end]){
        swap(arr[st],arr[end]);
    }
    st++;
    end--;
}
}
int main(){
    int arr[] = {44,7,78,5,75,48,7,45};
    int sz = 8;
    re(arr,sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
   
}