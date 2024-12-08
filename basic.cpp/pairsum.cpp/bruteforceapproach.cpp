#include <iostream>
#include <vector>
using namespace std;
vector<int> pairsum(vector<int> nums, int target)
{
    vector<int> ans;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}
int main()
{
    vector<int> ans;
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    ans = pairsum(nums, target);
    cout << ans[0] << ", " << ans[1];
    return 0;
}