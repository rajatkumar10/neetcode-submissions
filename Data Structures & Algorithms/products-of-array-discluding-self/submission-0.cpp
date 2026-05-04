class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        vector<int>suff(n);
        vector<int>ans(n);
        pre[0]=1;
        suff[0]=1;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]*nums[i-1];
            suff[i]=suff[i-1]*nums[n-i];
        }
        for(int i=0;i<n;i++){
            ans[i]=pre[i]*suff[n-i-1];
        }
        return ans;
    }
};
