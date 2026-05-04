class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length()>s.length()){
            return "";
        }
        unordered_map<char,int>mp;
        for(auto it:t){
            mp[it]++;
        }
        int reqcount=t.length();
        int mini=1e9;
        int i=0,j=0;
        int start_i=-1;
        while(j<s.length()){
            if(mp[s[j]]>0){
                reqcount--;
            }
            mp[s[j]]--;
            while(reqcount==0){
                int curr=j-i+1;
                if(curr<mini){
                    mini=curr;
                    start_i=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    reqcount++;
                }
                i++;
            }
            j++;
        }
        return mini==1e9?"":s.substr(start_i,mini);
    }
};
