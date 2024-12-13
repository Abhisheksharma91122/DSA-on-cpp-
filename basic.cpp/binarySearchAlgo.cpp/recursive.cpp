#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr , int tar, int st , int end){
    if (st<=end)
    {
        int mid = st + (end-st)/2;
        if (tar > arr[mid])
        {
            return binarysearch(arr,tar,mid+1,end);
        } else if(tar < arr[mid]){
            return binarysearch(arr,tar,st,mid-1);
        } else {
            return mid;
        }
    }
    return -1;
}

int main(){
    int target = 5;
    vector<int> arr = {1,2,3,4,5,6};
    int st = 0;
    int end = arr.size()-1;
    // cout<<end;
    cout<< binarysearch(arr,target,st,end);
}