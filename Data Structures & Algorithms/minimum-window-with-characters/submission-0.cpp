class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length()>s.length())return "";
        int n=s.length();
        unordered_map<char,int>mp;
        for(auto it:t){
            mp[it]++;
        }
        int minsize=INT_MAX;
        int reqcount=t.length();
        int i=0,j=0;
        int start_i=0;
        while(j<n){
            char ch=s[j];
            if(mp[ch]>0){
                reqcount--;
            }
            mp[ch]--;
            while(reqcount==0){
                int currsize=j-i+1;
                if(minsize>currsize){
                    minsize=currsize;
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
        return minsize==INT_MAX?"":s.substr(start_i,minsize);
    }
};
