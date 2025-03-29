#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int st, int end, int tar)
{

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] == tar)
        {
            return mid;
        }
        else if (nums[mid] > tar)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return st;
}

int searchInsert(vector<int> &nums, int target)
{

    int idx = binarySearch(nums, 0, nums.size() - 1, target);
    return idx;
}


int main() {
    vector<int> arr = {1,3,4,5,7};
    int target = 6;

    cout << searchInsert(arr,target);
}