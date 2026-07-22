class Solution {
public:
int helper(int ind,int buy,vector<int>&arr,vector<vector<int>>&dp){
    if(ind>=arr.size())return 0;
    int ans=0;
    if(dp[ind][buy]!=-1)return dp[ind][buy];
    if(buy){
        int op1=-arr[ind]+helper(ind+1,0,arr,dp);
        int op2=helper(ind+1,1,arr,dp);
        ans=max(op1,op2);
    }
    else{
        int op1=arr[ind]+helper(ind+2,1,arr,dp);
        int op2=helper(ind+1,0,arr,dp);
        ans=max(op1,op2);
    }
    return dp[ind][buy]=ans;
}
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(3,-1));
        return helper(0,1,arr,dp);
    }
};
