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
    int coinChange(vector<int>& arr, int k) {
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        int ans=helper(n-1,arr,k,dp);
        return ans==1e9?-1:ans;
    }
};
