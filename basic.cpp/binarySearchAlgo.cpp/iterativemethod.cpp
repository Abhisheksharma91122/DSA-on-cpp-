#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr , int target){
    int st = 0 , end = arr.size() - 1;
    while(st<=end){
        int mid = (st+end)/2;
        if (target > arr[mid])      
        {
            st = mid + 1;
        } else if(target < arr[mid]){
            end = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main(){
//     vector<int> arr = {1,2,3,4,5,6,7};
//     int target = 64;
    vector<int> arr = {1,2,3,4,5,6};
    int target = 6;
    cout<< binarysearch(arr,target) << endl;
}