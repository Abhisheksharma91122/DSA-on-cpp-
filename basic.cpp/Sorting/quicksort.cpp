#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int st, int end) { // O(n)
    int idx = st -1, pivot = arr[end];

    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
        
    }

    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void quickSort(vector<int>& arr, int st, int end) { // O(log n * n)

    if (st < end)
    {
        int pivIdx = partition(arr,st,end);

        quickSort(arr, st, pivIdx-1); // left half
        quickSort(arr, pivIdx+1, end); // right half
    }
    
}

int main() {
    vector<int> arr = {12,45,5,4,78,1};

    quickSort(arr,0,arr.size()-1);

    for(int val : arr) {
        cout << val << " ";
    }
    return 0;
}