#include<bits/stdc++.h>
using namespace std;
int CountAnagrams(string s, string p){
    int n = s.length();
    int k = p.length();

    unordered_map<char,int> mp1,mp2;
    for(int i = 0; i < k; i++){
        mp1[p[i]]++;
    }
    int i = 0, j = 0, ans = 0;

    while(j < n){
        mp2[s[j]]++;
        

        if(j - i + 1 == k){
            if(mp1 == mp2){
                ans++;
            }
            mp2[s[i]]--;
            if(mp2[s[i]] == 0){
                mp2.erase(s[i]);
            }
           
            i++;
        }
        j++;
    }

    


    return ans;
}
int main(){
    string s = "forxxorfxdofr";
    string p = "for";

    cout<<CountAnagrams(s,p);
    
}
