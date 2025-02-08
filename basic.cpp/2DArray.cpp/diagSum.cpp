#include<iostream>
using namespace std;

int diagonalSum(int arr[][3], int n){
    int leftsum = 0;
    int rightsum = 0;
    for (int i = 0; i < n; i++)
    {
        leftsum += arr[i][i];
        rightsum += arr[i][n-1-i];
    }
    return abs(rightsum-leftsum);
}

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout << diagonalSum(arr,3);
}