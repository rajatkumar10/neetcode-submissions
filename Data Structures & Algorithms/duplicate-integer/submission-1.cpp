class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]){
        //         return true;
        //     }
        // }
        // return false;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>1) return true;
        }
        return false;
    }
};
