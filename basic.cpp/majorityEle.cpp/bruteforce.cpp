#include<iostream>
#include<vector>
using namespace std;
int majority(vector<int> nums){
    int size = nums.size();
    for(int val : nums){
        int freq = 0;
        for(int el : nums){
            if(val == el){
                freq++;
            }
        }
        if (freq > size/2)
        {
            return val ;
        }
    }
}
int main(){
    vector<int> nums = {1,2,2,1,2,2};
    int ans = majority(nums);
    cout<<"the majority element is : "<<ans;

}