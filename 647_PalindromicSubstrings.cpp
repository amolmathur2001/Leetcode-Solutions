#include<bits/stdc++.h>
using namespace std;
void countSubstrings(string s){
    int n = s.size(); //length of the string 
    int count = 0; // initial to count = 0
    vector<vector<int> > dp(n+1,vector<int>(n+1,0)); //2d vector
    for(int gap = 0; gap < n; gap++){
        for(int i = 0,j = gap; j < n; i++,j++){
            if(gap == 0){
                dp[i][j] = 1;
                count++;
            }
            if(s[i] == s[j] && gap == 1){
                dp[i][j] = 1;
                count++;
            }
            if(s[i] == s[j] &&  dp[i+1][j-1] == 1 && gap >= 2){
                dp[i][j] = 1;
                count++;
            }
        }
    }
    cout<<count<<endl;


}
int main(){
    string s;
    cin>>s;
    countSubstrings(s);
}
