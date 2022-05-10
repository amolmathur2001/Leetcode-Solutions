//We have used Backtracking here

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void Helper(int start, vector<vector<int> > &v, vector<int> &v1, int k, int n){
        if(k == 0){
            if(n == 0){
                v.push_back(v1);
                return;
            }
        }
        for(int i = start; i <= 9; i++){
            v1.push_back(i);
            Helper(i+1,v,v1,k - 1, n-i);
            v1.pop_back();
        }

    }
    vector<vector<int>> combinationSum3(int k, int n){
        vector<vector<int> > v;
        vector<int> v1;
        Helper(1,v,v1,k,n);
        return v;
    }
};
int main(){
    int k,n;
    cin>>k>>n;
    Solution s1;
    vector<vector<int> > ans = s1.combinationSum3(k,n);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    
}
