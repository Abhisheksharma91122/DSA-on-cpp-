#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> s;
        vector<int> ans;
        int n = grid.size();
        int a, b;

        int expSum = 0, actualSum = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                actualSum += grid[i][j];
                
                if (s.find(grid[i][j]) != s.end()) {
                    a = grid[i][j]; // Repeated value
                }

                s.insert(grid[i][j]);
            }
        }
        
        expSum = (n * n * (n * n + 1)) / 2;
        b = expSum + a - actualSum; // Missing value
        
        ans.push_back(a);
        ans.push_back(b);
        
        return ans;
    }
};

int main() {
    Solution sol;

    // Example input: 3x3 grid where 1 number is missing and 1 is repeated
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 6, 6},
        {7, 8, 9}
    };

    vector<int> result = sol.findMissingAndRepeatedValues(grid);

    cout << "Repeated Value: " << result[0] << endl;
    cout << "Missing Value: " << result[1] << endl;

    return 0;
}
