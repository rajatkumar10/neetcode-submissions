class Solution {
public:
int sechelp(vector<int>&arr){
    int n=arr.size();
    vector<int>dp(n+1,0);
    for(int i=n-1;i>=0;i--){
        int op1=dp[i+1];
        int op2=arr[i];
        if(i+2<n){
            op2+=dp[i+2];
        }
        dp[i]=max(op1,op2);
    }
    return dp[0];
}
    int rob(vector<int>& nums) {
        vector<int>a1;
        vector<int>a2;
        int n=nums.size();
         if(n==1)return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0){
                a1.push_back(nums[i]);
            }
            if(i!=n-1){
                a2.push_back(nums[i]);
            }
        }
        return max(sechelp(a1),sechelp(a2));
    }
};
