class Solution {
public:
void helper(int ind,vector<int>&arr,
int k,vector<int>&ds,vector<vector<int>>&ans){
if(ind==arr.size()){
    if(k==0){
 ans.push_back(ds);
    }
    return;
}
if(k>=arr[ind]){
ds.push_back(arr[ind]);
helper(ind,arr,k-arr[ind],ds,ans);
ds.pop_back();
}
helper(ind+1,arr,k,ds,ans);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>res;
        helper(0,nums,target,res,ans);
        return ans;
    }
};
