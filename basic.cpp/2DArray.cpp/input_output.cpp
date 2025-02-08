#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    int row = 2;
    int column = 3;
    cout << "Enter the matrix elements : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }
    

}