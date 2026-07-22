class Solution {
public:
int helper(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){
    if (i < 0 || j < 0) return 0;
    if (arr[i][j] == 1) return 0;
    if (i == 0 && j == 0) return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    if(arr[i][j]==1)return 0;
    int op1=helper(i-1,j,arr,dp);
    int op2=helper(i,j-1,arr,dp);
    return dp[i][j]=op1+op2;
}
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int n=arr.size(),m=arr[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return helper(n-1,m-1,arr,dp);
    }
};