class Solution {
public:
std::array<int,256>hash(string &s){
    std::array<int,256>hash={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]]++;
    }
    return hash;
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<std::array<int,256>,vector<string>>mp;
        for(auto c:strs){
            mp[hash(c)].push_back(c);
        }
        vector<vector<string>>ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
