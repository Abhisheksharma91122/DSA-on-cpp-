#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>> &maze, int row, int col, string path, vector<string> &ans, vector<vector<bool>>& vis) {  // TC : O(4^n^2) and SC: O(n^2)
    int n = maze.size();
    if (row < 0 || col < 0 || row >= n || col >= n || maze[row][col] == 0 || vis[row][col] == true)
    {
        return;
    }

    if (row == n-1 && col == n-1)
    {
        ans.push_back(path);
    }
    

    vis[row][col] = true;

    helper(maze,row+1,col,path+"D",ans,vis); // down
    helper(maze,row-1,col,path+"U",ans,vis); // up 
    helper(maze,row,col+1,path+"R",ans,vis); // right
    helper(maze,row,col-1,path+"L",ans,vis); // left

    vis[row][col] = false;
    
}

vector<string> findPath(vector<vector<int>> &maze) {
    int n = maze.size();

    vector<string> ans;
    string path = "";

    vector<vector<bool>> vis(n, vector<bool>(n, false));

    helper(maze,0,0,path,ans,vis);

    return ans;
}




int main(){
    vector<vector<int>> maze = {{1,0,0,0}, {1,1,0,1}, {1,1,0,0}, {0,1,1,1}};
    vector<string> ans;
    ans = findPath(maze);

    for(string st : ans){
        cout << st << endl;
    }
}