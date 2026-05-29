class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int k) {
        int n=arr.size();
        int i=0,j=arr[0].size()-1;
        while(i<n && j>-1){
            if(arr[i][j]==k){
                return true;
            }
            else if(arr[i][j]<k){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};
