#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    set<vector<int>> s;
    
    void getCombination(vector<int>& arr, int idx, int tar, vector<vector<int>>& ans, vector<int>& combination) {
        if (idx == arr.size() || tar < 0) {
            return;
        }
        
        if (tar == 0) {
            if (s.find(combination) == s.end()) {
                ans.push_back(combination);
                s.insert(combination);
            }
            return;
        }
        
        combination.push_back(arr[idx]);
        
        // Include the current element and move to next
        getCombination(arr, idx + 1, tar - arr[idx], ans, combination);
        
        // Include the current element again (multiple times allowed)
        getCombination(arr, idx, tar - arr[idx], ans, combination);
        
        // Exclude the current element
        combination.pop_back();
        getCombination(arr, idx + 1, tar, ans, combination);
    }
    
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<vector<int>> ans;
        vector<int> combination;
        getCombination(arr, 0, tar, ans, combination);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = sol.combinationSum(arr, target);
    
    cout << "Combinations: " << endl;
    for (auto& comb : result) {
        cout << "[ ";
        for (int num : comb) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}
