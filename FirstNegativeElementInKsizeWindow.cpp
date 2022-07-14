#include<bits/stdc++.h>
using namespace std;
vector<int> FirstNegative(vector<int> &nums,int k){
    int n = nums.size();
    queue<int> q;
    vector<int> ans;
    int i = 0, j = 0;
    while(j < n){
        if(nums[j] < 0){
            q.push(nums[j]);
        }
        if(j - i + 1 < k){
            j++;
        }
        else if(j - i + 1 == k){
            if(q.size() == 0){
                cout<<"HELLO"<<endl;
                ans.push_back(0);

            }
            else{
                int  num = q.front();
                ans.push_back(num);
            }
            if(nums[i] == q.front()){
                q.pop();
            }
            i++;
            j++;

        }
        
    }
    return ans;

}
int main(){
    vector<int> nums{12 , -1  , -7 , 8 , -15 , 30 , 10 , 28};
    int k = 3;
    vector<int> a = FirstNegative(nums,k);
    for(auto it : a){
        cout<<it<<" ";
    }
}
