#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>& arr, int st, int end, int target)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (target < arr[mid])
        {
            return BinarySearch(arr,st,mid-1,target);
        }else{
            return BinarySearch(arr,mid+1,end,target);
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,87};
    int n = arr.size();
    int target = 87;
    cout << BinarySearch(arr,0,n-1,target);
}