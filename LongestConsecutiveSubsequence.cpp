#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums){
    unordered_set<int> s;
    for(int i = 0; i < nums.size(); i++){
        s.insert(nums[i]);
    }
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        if(!s.count(nums[i]-1)){
            int curr_num = nums[i];
            int cnt = 1;

            while(s.count(curr_num+1)){
                curr_num++;
                cnt++;
            }

            count = max(count,cnt);
        }

    }
    return(count);
        
}
int main(){
    vector<int> nums{100, 4 , 200 , 1 , 3 , 2};
    cout<<longestConsecutive(nums);

}
