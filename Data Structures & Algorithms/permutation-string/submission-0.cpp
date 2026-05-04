class Solution {
public:
bool help(vector<int>&arr){
    for(auto it:arr){
        if(it!=0){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s, string p) {
        vector<int>count(26,0);
        int i=0,j=0;
        for(auto it:s){
            count[it-'a']++;
        }
        int n=p.length();
        while(j<n){
            count[p[j]-'a']--;
            if(j-i+1==s.length()){
                if(help(count)){
                    return true;
                }
                count[p[i]-'a']++;
                i++;
            }
            j++;
        }
        return false;
    }
};
