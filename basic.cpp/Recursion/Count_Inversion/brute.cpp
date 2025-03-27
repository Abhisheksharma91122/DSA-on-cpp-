#include<iostream>
#include<vector>
using namespace std;

int inversionCount(vector<int> arr) {
    int n = arr.size() - 1;
    int invCount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                invCount++;
            }
            
        }
    }
    return invCount;
}

int main() {
    vector<int> arr = {6,3,5,2,7};

    int invCount = inversionCount(arr);

    cout << "inv count : " << invCount;
}