class Solution {
public:
    int trap(vector<int>& arr) {
        int i=0,j=arr.size()-1;
        int lmax=0,rmax=0;
        int ans=0;
        while(i<j){
            if(arr[i]<arr[j]){
                if(arr[i]<lmax){
                    ans+=lmax-arr[i];
                }
                else{
                    lmax=arr[i];
                }
                i++;
            }
            else{
                if(arr[j]<rmax){
                    ans+=rmax-arr[j];
                }
                else{
                    rmax=arr[j];
                }
                j--;
            }
        }
        return ans;
    }
};
