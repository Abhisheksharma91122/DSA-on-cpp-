#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums , int target){
    vector<int> ans;
    int size = nums.size();
    int i = 0;
    int j = size-1;
    while(i<j){
        int pairsum = nums[i]+nums[j];
        if (pairsum>target)
        {
            j--;
        }else if(pairsum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
    }
}
int main(){
    vector<int> nums = {2,9,11,15};
    vector<int>ans;
    int target = 20;
    ans = pairsum(nums,target);
    cout<<ans[0]<<", "<<ans[1];
}