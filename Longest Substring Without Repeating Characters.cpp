class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,int> mp;
        int i = 0, j = 0, mx = 0;
        while(j < n){
            mp[s[j]]++;
            if(mp.size() == j - i + 1){
                int len = j - i + 1;
                mx = max(mx,len);
            }
            while(mp.size() < j - i + 1 && i < j){
                mp[s[i]]--;
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }
                i++;

            }

            j++;
        }

        return mx;
    }
};
