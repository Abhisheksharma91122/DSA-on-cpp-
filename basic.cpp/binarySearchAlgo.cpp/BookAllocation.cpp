#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int maxallowedpages)
{
    int student = 1 , pages = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>maxallowedpages){
            return false;
        }
        if (arr[i] + pages <= maxallowedpages){
            pages += arr[i];
        } else {
            student++;
            pages = arr[i];
        }
        
    }
    return student > m ? false : true ;
    
}

int AllocateBooks(vector<int> arr, int n, int m) // O(logN * n)
{
    if (m > n)
    {
        return -1;
    }
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {15,17,20};
    int n = 3;
    int m = 2;
    cout << AllocateBooks(arr, n, m) << endl;
    return 0;
}