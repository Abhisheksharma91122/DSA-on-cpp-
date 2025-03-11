#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void getPermute(vector<int>& nums, int idx, vector<vector<int>>& ans) {
        if (idx == nums.size()) {
            ans.push_back(nums); // Store the current permutation
            return;
        }

        for (int i = idx; i < nums.size(); i++) {
            swap(nums[idx], nums[i]); // Swap to create a new permutation
            getPermute(nums, idx + 1, ans); // Recur for the next index
            swap(nums[idx], nums[i]); // Backtrack to restore original order
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getPermute(nums, 0, ans);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3}; // Example input
    vector<vector<int>> result = solution.permute(nums);

    // Print all permutations
    cout << "All permutations:" << endl;
    for (const auto& perm : result) {
        cout << "[ ";
        for (int num : perm) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
