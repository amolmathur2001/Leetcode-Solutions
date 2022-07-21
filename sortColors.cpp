#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums){
   //Dutch flag algo
   cout<<"HELLO"<<endl;
   int low = 0;
   int mid = 0;
   int high = nums.size()-1;
   cout<<high<<endl;

   while(mid <= high){
        cout<<"HELLO AGAIN"<<endl;
        
    
        if(nums[mid] == 0){
            cout<<"hello 0"<<endl;
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            cout<<"Hello 1"<<endl;

            mid++;
        }
        else if(nums[mid] == 2){
            cout<<"Hello 2"<<endl;
            cout<<"High : "<<high<<endl;
            swap(nums[mid],nums[high]);
            high--;
        }
        cout<<"mid "<<mid<<endl;
   }
   for(int i = 0; i < nums.size(); i++){
            cout<<nums[i]<<" ";
        }
}
int main(){
    vector<int> nums{2,0,1};
    sortColors(nums);
}
