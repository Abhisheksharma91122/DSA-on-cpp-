#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int>& nums){
    int n = nums.size();
    int freq = 0, ans = 0;
    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1,1,2,2,2,4,2};
    int ans = majority(nums);
    cout<<"the majority element is : "<<ans;
}