#include<bits/stdc++.h>
using namespace std;
int minMoves2(vector<int>& nums){
    sort(nums.begin(),nums.end(),greater<int>());
    int start = 0,end = nums.size();
    int mid = start + (end - start)/2;
    //cout<<nums[mid]<<endl;
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        count += abs(nums[mid] - nums[i]);
    }
    //cout<<count<<endl;
    return(count);
}
int main(){
    vector<int> nums{1,2,3};
    //minMoves2(nums);
    cout<<minMoves2(nums);

}
