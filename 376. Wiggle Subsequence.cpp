#include<bits/stdc++.h>
using namespace std;
int wiggleMaxLength(vector<int>& nums){
    int posi = 1, negi = 1;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] > nums[i-1]){
            posi = negi + 1;
        }
        if(nums[i] < nums[i-1]){
            negi = posi + 1;
        }
    }

    return(max(posi,negi));
        
}
int main(){
    vector<int> nums{1,17,5,10,13,15,10,5,16,8};
    cout<<wiggleMaxLength(nums);

}
