class Solution {
public:
vector<int>helperleft(vector<int>&arr,int n){
    vector<int>ans(n);
    ans[0]=arr[0];
    for(int i=1;i<n;i++){
        ans[i]=max(arr[i],ans[i-1]);
    }
    return ans;
}
 vector<int>helperright(vector<int>&arr,int n){
    vector<int>ans(n);
    ans[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        ans[i]=max(arr[i],ans[i+1]);
    }
    return ans;
}
    int trap(vector<int>&arr) {
        int n=arr.size();
        vector<int>leftmaxi=helperleft(arr,n);
        vector<int>rightmaxi=helperright(arr,n);
        int sum=0;
        for(int i=0;i<n;i++){
            int h=min(leftmaxi[i],rightmaxi[i])-arr[i];
            sum=sum+h;
        }
        return sum;
    }
};