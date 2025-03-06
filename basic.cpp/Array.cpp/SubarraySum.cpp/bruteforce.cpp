#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    int subarraySum(vector<int>& arr, int k){
        int n = arr.size();
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += arr[j];
                if (sum == k)
                {
                    count++;
                }
                
            }
            
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
