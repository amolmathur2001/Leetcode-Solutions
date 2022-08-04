#include<bits/stdc++.h>
using namespace std;
void solveDfs(vector<vector<char>> &grid, int row, int col){
    if(row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size()){
        //base case aapka jab traversing apni charam seema par aa jayegi

        return;
    }
    if(grid[row][col] == '2' || grid[row][col] == '0'){
        //kab return karna hai, jab ya toh visited ho ya paani ho tab return
        //kardena theek hai na??
        return;
    }
    grid[row][col] = '2';
    solveDfs(grid,row+1,col);
    solveDfs(grid,row-1,col);
    solveDfs(grid,row,col-1);
    solveDfs(grid,row,col+1);
}
int numIslands(vector<vector<char>>& grid){
    int rows = grid.size();
    int cols = grid[0].size();
    int countIslands = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            //if cell is not visited then call dfs function
            if(grid[i][j] == '1'){
                solveDfs(grid,i,j);
                countIslands++;
            
            }
        }
    }
    return countIslands;
        
}
int main(){
    vector<vector<char>> grid{
        {'1','1','1','1','1'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };
    cout<<numIslands(grid);
    

    
}
