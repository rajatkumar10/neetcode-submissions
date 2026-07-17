class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,n=nums.size();
        int i=0,j=0;
        int ans=1e9;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                sum-=nums[i];
                 ans=min(ans,j-i+1);
                i++;
            }
            j++;
        }
        return ans==1e9?0:ans;
    }
};