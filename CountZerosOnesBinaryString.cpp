#include<bits/stdc++.h>
using namespace std;
vector<int> countZerosOnes(string str){
    vector<int> count(2,0);
    for(int i = 0; i < str.length(); i++){
        count[str[i] - '0']++;
    }
    return count;

}
int main(){
    string str;
    cin>>str;
    vector<int> ans = countZerosOnes(str);
    cout<<"No.of zeros is : "<<ans[0]<<" "<<"No.of ones : "<<ans[1];

}
