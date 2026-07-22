class Solution {
public:
int help(int ind,vector<int>&arr,int k,vector<vector<int>>&dp){
    if(k==0)return true;
    if(ind==0) return arr[0]==k;
    if(dp[ind][k]!=-1)return dp[ind][k];
    int op1=help(ind-1,arr,k,dp);
    int op2=0;
    if(k>=arr[ind]){
    op2=help(ind-1,arr,k-arr[ind],dp);
    }
    return dp[ind][k]=op1 | op2;
}
int helper(vector<int>&arr,int k){
    int n=arr.size();
     vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
    return help(n-1,arr,k,dp);
}
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int k=sum/2;
        if(sum%2!=0)return false;
        return helper(nums,k);
    }
};
