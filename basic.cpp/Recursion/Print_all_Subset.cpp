#include<iostream>
#include<vector>
using namespace std;

void PrintSub(vector<int> arr, vector<int> &ans, int i){
    if (i == arr.size())
    {
        for(int val : ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // include
    ans.push_back(arr[i]);
    PrintSub(arr,ans,i+1);

    ans.pop_back(); // backtranking 
    PrintSub(arr,ans,i+1);
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans;
    PrintSub(arr,ans,0);
}