// Example :-
// Input: nums = [3,2,2,3], val = 3
// Output: 2, nums = [2,2,_,_]

#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int val)
{

    int validIdx = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[validIdx] = nums[i];
            validIdx++;
        }
    }

    return validIdx;
}

int main() {
    vector<int> arr = {3,2,2,3};
    int val = 3;

    int k = removeElement(arr, val);
    
    cout << k << endl;
    for(int val: arr) {
        cout << val << " ";
    }
}