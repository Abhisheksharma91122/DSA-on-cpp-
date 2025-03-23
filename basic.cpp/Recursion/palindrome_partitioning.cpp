#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    // Optimized palindrome check using two pointers (O(N) instead of O(N log N))
    bool isPalin(const string& s) {
        int left = 0, right = s.size()-1;
        while (left < right) {
            if(s[left] != s[right]) {
                return false;
            }
            left++; 
            right--;
        }
        return true;
    }

    // Backtracking function
    void getpalin(const string& s, vector<string>& partitions, vector<vector<string>>& ans) {
        if (s.size() == 0) {
            ans.push_back(partitions);
            return;
        }

        for (int i = 0; i < s.size(); i++) {
            string part = s.substr(0, i+1);
            if (isPalin(part)) {
                partitions.push_back(part);  // Add the palindrome substring
                getpalin(s.substr(i+1), partitions, ans);  // Recur for the next part
                partitions.pop_back();  // Backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partitions;
        getpalin(s, partitions, ans);  // Start from index 0
        return ans;
    }
};

// Driver code to test the function
int main() {
    Solution solution;
    string s = "aab";
    vector<vector<string>> result = solution.partition(s);

    cout << "Palindrome partitions of \"" << s << "\":" << endl;
    for (const auto& partition : result) {
        cout << "[ ";
        for (const auto& str : partition) {
            cout << "\"" << str << "\" ";
        }
        cout << "]" << endl;
    }

    return 0;
}
