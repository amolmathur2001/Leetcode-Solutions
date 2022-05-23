class Solution {
public:
    int count(string &s){
        int cnt = 0;
        for(auto c:s)
            cnt += (c=='0');
        return cnt;
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
     int dp[101][101] = {0};
        for(auto & s : strs){
        int cnt_0=count(s), cnt_1=s.size()-cnt_0;
            for(int zeros=m;zeros>=0;zeros--){
                for(int ones=n;ones>=0;ones--){
                    if(cnt_0<=zeros && cnt_1<=ones)
                        dp[zeros][ones]=max(dp[zeros][ones],dp[zeros-cnt_0][ones-cnt_1]+1);
                    
                }
            }
        }
        return dp[m][n];
    } 
};
