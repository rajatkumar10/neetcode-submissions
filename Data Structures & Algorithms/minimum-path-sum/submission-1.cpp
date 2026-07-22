class Solution {
public:
int helper(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){
    if(i==0 && j==0)return arr[0][0];
    if(i<0 || j<0)return 1e9;
    if(dp[i][j]!=-1)return dp[i][j];
    int op1=arr[i][j]+helper(i-1,j,arr,dp);
    int op2=arr[i][j]+helper(i,j-1,arr,dp);
    return dp[i][j]=min(op1,op2);
}
    int minPathSum(vector<vector<int>>& arr) {
        int n=arr.size(),m=arr[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return helper(n-1,m-1,arr,dp);
    }
};