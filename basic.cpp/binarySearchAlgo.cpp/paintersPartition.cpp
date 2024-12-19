#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr , int n, int m , int  maxAllowedtime){
    int painter = 1 , time = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>maxAllowedtime)
        {
            return false;
        }
        if (time + arr[i] <= maxAllowedtime)
        {
            time += arr[i];
        } else {
            painter++;
            time = arr[i];
        }
        
    }
    return painter<=m;
}

int PainterPartitionProblem(vector<int> arr , int n , int m){
    if(m>n){
        return -1;
    }

    int sum , maxvalue = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxvalue = max(maxvalue,arr[i]);
    }

    int st = maxvalue , end = sum , ans = -1;
    
    while(st<=end){
        int mid = st + (end - st)/2;
        if (isPossible(arr,n,m,mid))        
        {
            ans = mid;
            end = mid -1;
        } else {
            st = mid + 1;
        }
    }
    return ans;

}


int main(){
    vector<int> arr = {40,30,10,20};
    int n = 4 , m = 2;

    cout<<PainterPartitionProblem(arr,n,m)<<endl;
    return 0;
}