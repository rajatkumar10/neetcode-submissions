class Solution {
public:
void helper(int ind,vector<int>&arr,vector<vector<int>>&ans){
    if(ind==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=ind;i<arr.size();i++){
        swap(arr[ind],arr[i]);
        helper(ind+1,arr,ans);
        swap(arr[ind],arr[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        helper(0,nums,ans);
        return ans;
    }
};
