int maxOperations(vector<int>& nums, int k){
    sort(nums.begin(),nums.end());
    int cnt = 0;
    int start = 0, end = nums.size()-1;
    while(start < end){
        
        if(nums[start] + nums[end] == k){
            cnt++;
            start++;
            end--;
        }
        else if(nums[start] + nums[end] > k){
            end--;
        }
        else{
            start++;
        }
        
    }
    return(cnt);
        
}
