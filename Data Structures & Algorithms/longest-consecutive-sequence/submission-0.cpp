class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int cnt=1,maxi=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1] && i>0) continue;
            if(nums[i]==1+nums[i-1]){
                cnt++;
            }
            else{
                cnt=1;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};
