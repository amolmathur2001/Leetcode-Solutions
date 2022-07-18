#include<bits/stdc++.h>
using namespace std;
int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target){
    int n = matrix.size(),m = matrix[0].size();
    //calculating prefix sum of each row and matrix

    for(int  i = 0; i < n; i++){
        for(int j = 1; j < m; j++){
            matrix[i][j] += matrix[i][j-1];
        }
    }

    int cnt = 0;

    for(int c1 = 0; c1 < m; c1++){
        for(int c2 = c1; c2 < m; c2++){
            unordered_map<int,int> mp;
            mp[0] = 1;
            int sum = 0;
            for(int row = 0; row < n; row++){
                if(c1 > 0){
                    sum += matrix[row][c2] - matrix[row][c1-1];
                }
                else{
                     sum += matrix[row][c2];
                }
                if(mp[sum - target] != 0){
                    cnt += mp[sum - target];
                }
                mp[sum]++;
            }
        }
    }

    return cnt;
        
}
int main(){
    vector<vector<int>> matrix{
        {0 , 1 , 0},{1 , 1 , 1},{0 , 1 , 0}
    };
    int target = 0;
    cout<<numSubmatrixSumTarget(matrix,target);

}
