class Solution {
public:
int helper(int i,int j,vector<int>&arr,vector<vector<int>>&dp){
    if(i>j) return 0;
    int maxi=-1e9;
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    for(int k=i;k<=j;k++){
        int cost=arr[i-1]*arr[j+1]*arr[k]+helper(i,k-1,arr,dp)+helper(k+1,j,arr,dp);
        maxi=max(maxi,cost);
    }
dp[i][j]=maxi;
return dp[i][j];
}
// int secondhelper(vector<int>&nums){
//     int n=nums.size();
//       vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));
//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= n; j++) {
//             if (i > j) continue;
//             int maxi = INT_MIN;
//             for (int ind = i; ind <= j; ind++) {
//                 int coins = nums[i - 1] * nums[ind] * nums[j + 1];
//                 int remainingCoins = dp[i][ind - 1] + dp[ind + 1][j];
//                 maxi = max(maxi, coins + remainingCoins);
//             }
//             dp[i][j] = maxi;
//         }
//     }
//     return dp[1][n];
// }
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        nums.push_back(1);
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        nums.insert(nums.begin(),1);
         return helper(1,n,nums,dp);
        // return helper(nums);
    }
};