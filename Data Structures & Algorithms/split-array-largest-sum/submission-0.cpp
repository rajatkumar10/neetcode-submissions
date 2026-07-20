class Solution {
public:
bool helper(vector<int>&arr,int mid,int k){
    int c=1,sum=0;
    for(int i=0;i<arr.size();i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            sum=arr[i];
            c++;
        }
    }
    return c<=k;
}
    int splitArray(vector<int>& nums, int k) {
        int s=*max_element(nums.begin(),nums.end());
        int e=accumulate(nums.begin(),nums.end(),0);
        while(s<=e){
            int mid=s+(e-s)/2;
            if(helper(nums,mid,k)){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return s;
    }
};