#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t){
    int n = s.length();
    int m  = t.length();
    unordered_map<char,int> mp;
    if(m > n){
        return false;
    }
    for(int i = 0; i < n; i++){
        mp[s[i]]++;

    }
    for(int i = 0; i < m; i++){
        if(mp.count(t[i]) != 0){
            mp[t[i]]--;
        }
        if(mp[t[i]] == 0){
            mp.erase(t[i]);
        }
    }
    if(mp.size() == 0){
        return true;
    }
    return false;
        
        
}
int main(){
    string s = "rat";
    string t = "car";
    if(isAnagram(s,t)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
