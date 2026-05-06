class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        //sort(arr.begin(),arr.end());
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            int res=min(arr[i],arr[j])*(j-i);
            ans=max(ans,res);
            if(arr[i]<arr[j])i++;
            else j--;
        }
        return ans;
    }
};
