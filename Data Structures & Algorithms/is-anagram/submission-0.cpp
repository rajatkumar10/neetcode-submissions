class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq1[26]={0};
        for(auto it:s){
            freq1[it-'a']++;
        }
        for(auto it:t){
            freq1[it-'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq1[i]!=0){
                return false;
            }
        }
        return true;
    }
};