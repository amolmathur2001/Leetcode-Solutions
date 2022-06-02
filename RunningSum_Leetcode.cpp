#include<bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,0);
    ans[0] = nums[0];
    for(int i = 1; i < n; i++){
        ans[i] = ans[i-1] + nums[i];
    }
    return ans;
        

}
int main(){
    vector<int> nums{1,1,1,1,1};
    vector<int> ans1 = runningSum(nums);
    for(int i : ans1){
        cout<<i<<" ";
    }
}
