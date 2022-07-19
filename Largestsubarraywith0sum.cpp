#include<bits/stdc++.h>
using namespace std;
int maxLen(vector<int>&A, int n){   
        // Your code here
        int sum = 0, maxi = 0;
        unordered_map<int,int> m;
        for(int i = 0; i < n; i++){
            sum = sum + A[i];
            if(sum == 0){
                maxi = i + 1;
            }
            if(m.count(sum) != 0){
                //cout<<"hello"<<endl;
                maxi = max(maxi,i - m[sum]);

            }
            else{
                m[sum] = i;
            }
        }

        return maxi;
}
int main(){
    int n = 4;
    vector<int> A{-1 , 1 , -1 , 1};
    cout<<maxLen(A,n);

}
