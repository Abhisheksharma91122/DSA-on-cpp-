#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majority(vector<int>& nums){
    int n = nums.size();
    // sorting 
    sort(nums.begin() , nums.end());
    // freq count
    int freq = 1;
    int ans = nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        } else {
            freq  = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
    }
    return -1;
}

int main(){
    vector<int> nums ={1,2,2,2,3,3,3,3,3,3,1};
    int ans = majority(nums);
    cout<<"the majority element is : "<<ans;
}