class Solution {
public:
void help(vector<int>&arr,int s,int mid,int e){
    int left=s,right=mid+1;
    vector<int>ans;
    while(left<=mid && right<=e){
        if(arr[left]<=arr[right]){
            ans.push_back(arr[left]);
            left++;
        }
        else{
            ans.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
       ans.push_back(arr[left]);
            left++;
    }
    while(right<=e){
        ans.push_back(arr[right]);
            right++;
    }
    for(int i=s;i<=e;i++){
        arr[i]=ans[i-s];
    }
}
void helper(vector<int>&arr,int s,int e){
    if(s>=e)return;
    int mid=s+(e-s)/2;
    helper(arr,s,mid);
    helper(arr,mid+1,e);
    help(arr,s,mid,e);
}
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        helper(nums,0,n-1);
        return nums;
    }
};