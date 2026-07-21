class Solution {
public:
int helper(int ind,vector<int>&arr,int k,vector<vector<int>>&dp){
    if(ind==0){
        if(k%arr[0]==0)return k/arr[0];
        else return 1e9;
    }
    if(dp[ind][k]!=-1)return dp[ind][k];
    int op1=helper(ind-1,arr,k,dp);
    int op2=1e9;
    if(k>=arr[ind]){
    op2=1+helper(ind,arr,k-arr[ind],dp);
    }
    return dp[ind][k]=min(op1,op2);
}
int sechelper(vector<int>&arr,int k){
    int n=arr.size();
    vector<vector<int>>dp(n+1,vector<int>(k+1,0));
    for(int j=1;j<=k;j++){
        if(j%arr[0]==0)dp[0][j]=j/arr[0];
        else dp[0][j]=1e9;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=k;j++){
            int op1=dp[i-1][j];
            int op2=1e9;
            if(j>=arr[i]){
                op2=1+dp[i][j-arr[i]];
            }
            dp[i][j]=min(op1,op2);
        }
    }   
    return dp[n-1][k];
}
    int coinChange(vector<int>& arr, int k) {
        int n=arr.size();
        //vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        int ans=sechelper(arr,k);
        return ans==1e9?-1:ans;
    }
};
