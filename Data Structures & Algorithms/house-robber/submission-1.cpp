class Solution {
public:
int sechelp(vector<int>&arr){
    int n=arr.size();
    vector<int>dp(n+1,0);
    for(int i=n-1;i>=0;i--){
        int op1=dp[i+1];
        int op2=arr[i];
        if(i+2<n){
            op2+=dp[i+2];
        }
        dp[i]=max(op1,op2);
    }
    return dp[0];
}
int helper(int ind,vector<int>&arr,vector<int>&dp){
    if(ind==arr.size())return 0;
    if(dp[ind]!=-1)return dp[ind];
    int op1=0+helper(ind+1,arr,dp);
    int op2=arr[ind];
    if(ind+2<arr.size()){
    op2+=helper(ind+2,arr,dp);
    }
    return dp[ind]=max(op1,op2);
}
    int rob(vector<int>& nums) {
        // int n=nums.size();
        // vector<int>dp(n+1,-1);
        // return helper(0,nums,dp);
        return sechelp(nums);
    }
};
