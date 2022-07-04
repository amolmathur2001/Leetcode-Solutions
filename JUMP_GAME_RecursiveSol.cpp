bool solve(vector<int> &nums, int i){
    int n = nums.size();
    if(i == n-1){
        cout<<"Hello say true"<<endl;
        return true;
    }

    for(int k = i+1; k <= i + nums[i]; k++){
        cout<<k<<endl;
        if(solve(nums,k)){
            return true;
        }
    }
    return false;
}
bool canJump(vector<int> &nums){
    return(solve(nums,0));

}
