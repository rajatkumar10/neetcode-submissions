class Solution {
public:
int helper(vector<int>&arr,int mid,int k){
    int c=0;
    for(int i=0;i<arr.size();i++){
        c+=ceil(double(arr[i])/double(mid));
    }
    return (int)c<=k;
}
    int minEatingSpeed(vector<int>& arr, int h) {
        int n=arr.size();
        int low=1,high=1e9;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(helper(arr,mid,h)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
