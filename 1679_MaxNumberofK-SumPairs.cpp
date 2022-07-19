#include<bits/stdc++.h>
using namespace std;
int maxOperations(vector<int>& nums, int k){
    int n = nums.size();
    int cnt = 0;
    if(k == 1){
        return 0;
    }
    unordered_map<int,int> mp;
    for(int i = 0; i < n; i++){
        if(mp.count(k - nums[i]) != 0 && mp[k - nums[i]] > 0){
            mp[k - nums[i]]--;
            cnt++;
        }
        else{
            mp[nums[i]]++;
        }
}
    
    return cnt;

}
int main(){
    vector<int> nums{3,1,3,4,3};
    int  k = 6;
    cout<<maxOperations(nums,k);
}
