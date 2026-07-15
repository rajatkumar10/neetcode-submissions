class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        int n=arr.size();
        int i=0,j=n-1;
        while(i<j){
            int sum=arr[i]+arr[j];
            if(sum==k){
                return {i+1,j+1};
                i++;
                j--;
            }
            else if(sum<k){
                i++;
            }
            else{
                j--;
            }
        }
        return {-1,-1};
    }
};
