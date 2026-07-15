class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        int i=0,j=arr.size()-1;
        int c=0;
        sort(arr.begin(),arr.end());
        while(i<=j){
            int sum=arr[i]+arr[j];
            if(sum<=limit){
                i++;
                j--;
            }
            else{
                j--;
            }
            c++;
        }
        return c;
    }
};