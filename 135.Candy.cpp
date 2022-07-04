#include<bits/stdc++.h>
using namespace std;
void candy(vector<int>& ratings){
    int n = ratings.size();
    vector<int> compwithLeft(n,1);
    vector<int> compwithRight(n,1);

    for(int i = 1; i < n; i++){
        if(ratings[i] > ratings[i-1]){
            compwithLeft[i] = compwithLeft[i-1] + 1;
        }
    }
    for(auto it : compwithLeft){
        cout<<it<<" ";
    }
    cout<<endl;
    for(int i = n-2; i >= 0; i--){
        if(ratings[i] > ratings[i+1]){
            compwithRight[i] = compwithRight[i+1] + 1;
        }
    }
    for(auto it : compwithRight){
        cout<<it<<" ";
    }
    cout<<endl;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + (max(compwithLeft[i],compwithRight[i]));
    }
    cout<<sum<<endl;
    
        
}
int main(){
    vector<int> ratings{1 , 2 , 3};

    //cout<<candy(ratings);
    candy(ratings);
}
