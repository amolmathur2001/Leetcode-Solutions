#include<bits/stdc++.h>
using namespace std;
int longestSubstr(string str, int k){
    int n = str.length();
    unordered_map<char,int> m;
    int i = 0, j = 0,mx = -1;
    while(j < n){
        m[str[j]]++;
        if(m.size() == k){
            //condition hit (k unique charachters)
            int len = j - i + 1;
            mx = max(mx, len);
        }

        if(m.size() > k){
            while(m.size() > k && i < j){
                m[str[i]]--;
                if(m[str[i]] == 0){
                    m.erase(str[i]);
                }
                i++;
            }
        }
        j++;

    }

    return mx;

}
int main(){
    string str = "aaaa";
    int k = 2;
    cout<<longestSubstr(str,k);


}
