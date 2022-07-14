#include<bits/stdc++.h>
using namespace std;
int maxSum(vector<int> &nums, int k){
    int n = nums.size();
    int i  = 0, j = 0, sum = 0;
    int mx = 0;

    while(j < n){
        sum = sum + nums[j];
        if(j - i + 1 < k){
            j++;
        }
        else if(j - i + 1 == k){
            mx = max(mx,sum);

            sum = sum - nums[i];
            i++;
            j++;
        }


    }
    return mx;

}
int main(){
    vector<int> nums{1 , 4, 2 , 10  , 23 , 3 , 1 , 0, 20};
    int k = 4;

    cout<<maxSum(nums,k);

}

//it is sliding window question 
time complexity reduced from O(N^3) to O(N);
