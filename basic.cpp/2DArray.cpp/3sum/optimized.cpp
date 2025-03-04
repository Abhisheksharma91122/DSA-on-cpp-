#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int j = i + 1, k = n - 1;
            
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0) {
                    j++;
                } else if(sum > 0) {
                    k--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++, k--;
                    
                    while(j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                }
            }
        } 
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4}; // Fixed example

    vector<vector<int>> result = sol.threeSum(nums);
    
    cout << "Unique Triplets that sum to zero:\n";
    for(const auto& triplet : result) {
        cout << "[";
        for(int i = 0; i < triplet.size(); i++) {
            cout << triplet[i] << (i < triplet.size() - 1 ? ", " : "");
        }
        cout << "]\n";
    }
    
    return 0;
}
