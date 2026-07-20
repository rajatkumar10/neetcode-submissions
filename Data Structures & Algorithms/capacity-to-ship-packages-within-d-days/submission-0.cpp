class Solution {
public:
int helper(vector<int>&arr,int mid,int k){
    int curr=0,c=1;
    for(int i=0;i<arr.size();i++){
        if(curr+arr[i]<=mid){
            curr+=arr[i];
        }
        else{
            curr=arr[i];
            c++;
        }
    }
    return c<=k;
}
    int shipWithinDays(vector<int>& arr, int k) {
        int s=*max_element(arr.begin(),arr.end());
        int e=accumulate(arr.begin(),arr.end(),0);
        while(s<=e){
            int mid=s+(e-s)/2;
            if(helper(arr,mid,k)){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return s;
    }
};