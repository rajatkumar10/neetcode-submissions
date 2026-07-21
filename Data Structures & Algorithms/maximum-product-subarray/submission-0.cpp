class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prev=1,suff=1,n=nums.size();
        int ans=nums[0];
        for(int i=0;i<nums.size();i++){
            if(prev==0)prev=1;
            prev*=nums[i];
            if(suff==0)suff=1;
            suff*=nums[n-i-1];
            ans=max(ans,max(prev,suff));
        }
        return ans;
    }
};
