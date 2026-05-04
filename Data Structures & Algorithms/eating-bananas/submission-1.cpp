class Solution {
public:
bool helper(vector<int>&arr,int mid,int h){
    int sum=0;
    for(auto it:arr){
        sum+=ceil(double(it)/double(mid));
    }
    return int(sum)<=h;
}
    int minEatingSpeed(vector<int>& arr, int h) {
        int s=1,e=1e9;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(helper(arr,mid,h)){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return s;
    }
};
