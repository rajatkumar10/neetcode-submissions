class Solution {
public:
int helper(vector<int>&arr,int ind,int buy,vector<vector<int>>&dp){
    int ans=0;
    if(ind==arr.size())return 0;
    if(dp[ind][buy]!=-1){
        return dp[ind][buy];
    }
    if(buy){
        int op1=-arr[ind]+helper(arr,ind+1,0,dp);
        int op2=0+helper(arr,ind+1,1,dp);
        ans=max(op1,op2);
    }
    else{
        int op1=arr[ind]+helper(arr,ind+1,1,dp);
        int op2=helper(arr,ind+1,0,dp);
        ans=max(op1,op2);
    }
    return dp[ind][buy]=ans;
}
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(3,-1));
        return helper(arr,0,1,dp);
    }
};