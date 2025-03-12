#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to check if placing a queen at board[row][col] is safe
    bool isSafe(vector<string> &board, int row, int col, int n) {

        // Check the current horizontal row
        for (int j = 0; j < n; j++) {
            if (board[row][j] == 'Q') {
                return false;
            }
        }

        // Check the column above
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        // Check upper-left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Check upper-right diagonal
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    // Backtracking function to place queens row by row
    void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans) {
        if (row == n) { 
            ans.push_back(board);  // ✅ Store a valid solution
            return;
        }

        for (int j = 0; j < n; j++) { 
            if (isSafe(board, row, j, n)) { 
                board[row][j] = 'Q';  // ✅ Place a queen
                nQueens(board, row + 1, n, ans); // 🔄 Move to the next row
                board[row][j] = '.';  // ❌ Backtrack (Undo placement)
            }
        }
    }

    // Function to solve N-Queens and return all possible solutions
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.')); // Create an empty board
        vector<vector<string>> ans;
        nQueens(board, 0, n, ans); // Start placing queens from row 0
        return ans;
    }
};

// Driver code to test the solution
int main() {
    int n = 5;  // Change this value for different N
    Solution sol;
    vector<vector<string>> result = sol.solveNQueens(n);

    // Print all solutions
    for (int i = 0; i < result.size(); i++) {
        cout << "Solution " << i + 1 << ":\n";
        for (string row : result[i]) {
            cout << row << "\n";
        }
        cout << "\n";
    }

    return 0;
}
