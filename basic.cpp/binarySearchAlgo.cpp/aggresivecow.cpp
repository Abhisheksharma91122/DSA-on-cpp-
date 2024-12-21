#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(int N, int C , vector<int> arr, int maxAllowedDist){
    int cow = 1;
    int lastposition = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i]-lastposition >= maxAllowedDist)
        {
            cow++;
            lastposition = arr[i];
        }
        if (cow == C)
        {
            return true;
        }  
    }
    return false;
}

int getDistace(int N, int C , vector<int> arr){
    sort(arr.begin(),arr.end());
    int st = 1 , end = arr[N-1] - arr[0];
    int ans = -1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if (isPossible(N,C,arr,mid))
        {
            ans = mid;
            st = mid+1;
        } else {
            end = mid-1;
        } 
    }
    return ans;
}

int main(){
    int N = 5;
    int C = 3;
    vector<int> arr ={1,2,8,4,9};

    cout<<getDistace(N,C,arr)<<endl;
    return 0;
}