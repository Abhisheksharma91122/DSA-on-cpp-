#include <iostream>
#include <utility>

using namespace std;

pair<int, int> linearSearch(int arr[][3], int column, int row, int key) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (arr[i][j] == key) {
                return make_pair(i, j);  // Correct syntax for returning a pair
            }
        }
    }
    return make_pair(-1, -1);  // Correct way to return an invalid index
}

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    pair<int, int> result = linearSearch(arr, 3, 2, 6);
    
    cout << "Found at: (" << result.first << ", " << result.second << ")\n";  // Properly printing the pair
}