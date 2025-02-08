#include<iostream>
using namespace std;
int maxRowSum(int arr[][3], int row, int column){
    int result = 0;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum += arr[i][j];
        }
        result = max(result,sum);
    }
    return result;
    
}

int maxColoumnSum(int arr[][3], int row, int column){
    int result = 0;
    for (int j = 0; j < column; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }
        result = max(result,sum);
    }
    return result;
}

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row = 3;
    int column = 3;
    cout << maxColoumnSum(arr,3,3);
}