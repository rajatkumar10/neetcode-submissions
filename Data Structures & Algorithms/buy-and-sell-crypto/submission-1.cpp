class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int ans=0;
        int mini=1e9,maxi=-1e9;
        for(int i=0;i<arr.size();i++){
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]-mini);
        }
        return maxi;
    }
};
