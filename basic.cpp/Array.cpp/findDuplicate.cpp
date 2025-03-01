#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int slow = arr[0], fast = arr[0];

        // Detect cycle using Floyd's Algorithm
        do {
            slow = arr[slow];
            fast = arr[arr[fast]];
        } while (slow != fast);

        // Find the duplicate number (entry point of cycle)
        slow = arr[0];
        while (slow != fast) {
            slow = arr[slow];
            fast = arr[fast];
        }

        return slow;
    }
};

int main() {
    Solution sol;

    // Example input: Array with one duplicate number
    vector<int> arr = {3, 1, 3, 4, 2};

    int duplicate = sol.findDuplicate(arr);

    cout << "Duplicate Number: " << duplicate << endl;

    return 0;
}
