class Solution {
public:
void helper(int ind,vector<vector<int>>&ans,vector<int>&ds,vector<int>&arr,int target){
        if(target==0){
            ans.push_back(ds);
            return;
        }
    for(int i=ind;i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
             helper(i+1,ans,ds,arr,target-arr[i]);
             ds.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
       sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>ds;
        helper(0,ans,ds,arr,target);
        return ans;
    }
};