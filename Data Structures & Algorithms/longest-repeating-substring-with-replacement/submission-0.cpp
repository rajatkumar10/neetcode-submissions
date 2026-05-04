class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0;
        unordered_map<char,int>mp;
        int ans=0,res=0;
        while(j<s.length()){
            mp[s[j]]++;
            res=max(res,mp[s[j]]);
            if((j-i+1)-res>k){
                mp[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
