#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void getAllSubset(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubset) {
        if (i == nums.size()) {
            allSubset.push_back({ans});  // Add the current subset
            return;
        }

        // Include nums[i] in the subset
        ans.push_back(nums[i]);
        getAllSubset(nums, ans, i + 1, allSubset);

        // Exclude nums[i] from the subset
        ans.pop_back();
        
        // Skip all duplicates
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
            i++;
        }
        getAllSubset(nums, ans, i + 1, allSubset);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sort to handle duplicates
        vector<int> ans;
        vector<vector<int>> allSubset;
        getAllSubset(nums, ans, 0, allSubset);
        return allSubset;
    }
};

// Driver Code
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2};
    
    vector<vector<int>> result = sol.subsetsWithDup(nums);

    // Print result
    cout << "Unique subsets:\n";
    for (auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }

    return 0;
}
