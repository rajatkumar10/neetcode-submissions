class Solution {
public:
    bool searchMatrix(vector<vector<int>>&arr, int target) {
        int n=arr.size();
        int m=arr[0].size();
        int j=m-1;
        int i=0;
        while(i<n && j>-1){
            int sum=arr[i][j];
            if(sum==target) return true;
            else if(sum<target)i++;
            else j--;
        }
        return false;
    }
};