class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int i;
        for(i = 0; i < nums.size(); i++){
            if(k == i+1){
                break;
            }

        }
        return(nums[i]);
        
    }
};
