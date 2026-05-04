class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int ans=0;
        unordered_map<char,int>mp;
        while(j<s.length()){
            mp[s[j]]++;
            while(mp[s[j]]>1){
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]--;
                }
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
