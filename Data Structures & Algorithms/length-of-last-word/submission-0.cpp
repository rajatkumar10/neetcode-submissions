class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        while(i<s.length() && s[i]==' ')i++;
        int ans=0;
        while(s[i]!=' ' && i<s.length()){
            ans++;
            i++;
        }
        return ans;
    }
};