#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char num) {
        // Check row and column
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == num || board[i][col] == num) {
                return false;
            }
        }

        // Check 3x3 subgrid
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == num) {
                    return false;
                }
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board, int row, int col) {
        // If we have filled all rows, return true (Sudoku solved)
        if (row == 9) return true;

        // Move to the next column, if at the last column, move to next row
        int nextRow = (col == 8) ? row + 1 : row;
        int nextCol = (col == 8) ? 0 : col + 1;

        // If cell is already filled, move to the next cell
        if (board[row][col] != '.') {
            return solve(board, nextRow, nextCol);
        }

        // Try placing digits 1-9
        for (char num = '1'; num <= '9'; num++) {
            if (isSafe(board, row, col, num)) {
                board[row][col] = num; // Place the number
                if (solve(board, nextRow, nextCol)) {
                    return true; // If solved, return true
                }
                board[row][col] = '.'; // Undo (backtrack)
            }
        }
        return false; // No valid number found, trigger backtracking
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
    }

    // Helper function to print the board (for testing)
    void printBoard(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    Solution solver;
    cout << "Original Sudoku:\n";
    solver.printBoard(board);

    solver.solveSudoku(board);

    cout << "\nSolved Sudoku:\n";
    solver.printBoard(board);

    return 0;
}
