class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==k){
                return true;
            }
            if(nums[s]==nums[mid] && nums[mid]==nums[e]){
                s++;
                e--;
                continue;
            }
            if(nums[s]<=nums[mid]){
                if(k>=nums[s] && k<=nums[mid]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(k>=nums[mid] && k<=nums[e]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return false;
    }
};