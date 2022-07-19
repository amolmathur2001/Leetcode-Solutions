#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int> &nums, int k){
    unordered_map<int,int> mp;
    int cnt = 0,sum = 0;
    mp[0] = 1;
    for(int i = 0; i < nums.size(); i++){
        sum = sum + nums[i];

        if(mp.count(sum - k) != 0){
            //cout<<i<<endl;
            cnt = cnt + mp[sum - k];

        }
        mp[sum]++;

    }
    return cnt;
    
        
        
}
int main(){
    vector<int> nums{-1 , -1 , 1};
    //cout<<"Hello"<<endl;
    int k  = 0;
    //cout<<nums.size()<<endl;

    cout<<subarraySum(nums,k);

}
https://leetcode.com/problems/subarray-sum-equals-k/
