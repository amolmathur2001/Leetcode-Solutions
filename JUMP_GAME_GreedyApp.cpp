#include<bits/stdc++.h>
using namespace std;
int canJump(vector<int> &arr){
    int Reachable = 0;
    for(int i  = 0; i < arr.size(); i++){
        if(i > Reachable){
            return 0;
        }
        Reachable = max(Reachable,i + arr[i]);
    }
    return 1;

}
int main(){
    vector<int> arr{3 , 2 , 1 , 0 , 4};

    if(canJump(arr)){
        cout<<"Reachable"<<endl;

    }
    else{
        cout<<"Not Reachable"<<endl;
    }
}
