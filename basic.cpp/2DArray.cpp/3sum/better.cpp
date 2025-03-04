#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> uniqueTriplet;

        for(int i = 0; i < n; i++) {
            int tar = -nums[i];
            set<int> s;
            for(int j = i + 1; j < n; j++) {
                int third = tar - nums[j];
                
                if(s.find(third) != s.end()) {
                    vector<int> trip = {nums[i], nums[j], third};
                    sort(trip.begin(), trip.end());
                    uniqueTriplet.insert(trip);
                }
                
                s.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(uniqueTriplet.begin(), uniqueTriplet.end());
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
