#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> prefixSum(n, 0);
        int count = 0;

        prefixSum[0] = arr[0];

        for(int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }

        unordered_map<int, int> m;

        for(int j = 0; j < n; j++) {
            if(prefixSum[j] == k) {
                count++;
            }

            int value = prefixSum[j] - k;
            if(m.find(value) != m.end()) {
                count += m[value];
            }

            if(m.find(prefixSum[j]) == m.end()) {
                m[prefixSum[j]] = 0;
            }

            m[prefixSum[j]]++;
        }

        return count;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 1, 1};
    int k = 2;
    cout << "Number of subarrays with sum " << k << " is: " << sol.subarraySum(arr, k) << endl;
    return 0;
}
