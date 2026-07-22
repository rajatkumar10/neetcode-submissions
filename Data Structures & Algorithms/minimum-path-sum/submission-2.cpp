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
int sechelp(vector<vector<int>>&arr){
     int n=arr.size(),m=arr[0].size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0){
                dp[i][j]=arr[i][j];
            }
            else{
                int op1=arr[i][j];
                if(i>1)op1+=arr[i-1][j];
                int op2=arr[i][j];
                if(j>1)op2+=arr[i][j-1];
                dp[i][j]=min(op1,op2);
            }
        }
    }
    return dp[n-1][m-1];
}
    int minPathSum(vector<vector<int>>& arr) {
        int n=arr.size(),m=arr[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return helper(n-1,m-1,arr,dp);
    }
};