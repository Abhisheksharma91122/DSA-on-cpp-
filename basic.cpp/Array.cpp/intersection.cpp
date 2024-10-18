#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,2,3,4};
    int arr2[] = {2,5,6,3,1,8};
    int sz2 = 6, sz1=4;
    for(int i=0;i<sz1;i++){
        for(int j=0;j<sz2;j++){
            if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<endl;
            }
        }
        
    }
    return 0;
}