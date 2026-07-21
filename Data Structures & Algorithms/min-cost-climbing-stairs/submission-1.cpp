class Solution {
public:
int helper(int ind,vector<int>&arr,vector<int>&dp){
    if(ind==arr.size())return 0;
    int op1=arr[ind]+helper(ind+1,arr,dp);
    int op2=arr[ind];
    if(dp[ind]!=-1)return dp[ind];
    if(ind+2<arr.size()){
        op2+=helper(ind+2,arr,dp);
    }
    return dp[ind]=min(op1,op2);
}
    int minCostClimbingStairs(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n+1,-1);
        int a=helper(0,arr,dp);
        int b=helper(1,arr,dp);
        return min(a,b);
    }
};
