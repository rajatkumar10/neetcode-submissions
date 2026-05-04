class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(auto it:strs){
            string a=it;
            sort(a.begin(),a.end());
            mp[a].push_back(it);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
