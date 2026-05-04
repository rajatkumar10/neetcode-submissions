class Solution {
public:
    int maxArea(vector<int>&arr) {
        int n=arr.size();
        int i=0,j=n-1;
        int ans=0,res=0;
        while(i<j){
            int res=(j-i)*min(arr[i],arr[j]);
            ans=max(ans,res);
            if(arr[i]<arr[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};