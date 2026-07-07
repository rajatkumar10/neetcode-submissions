class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,elem=-1;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                c=1;
                elem=nums[i];
            }
            if(elem==nums[i]){
                c++;
            }
            else{
                c--;
            }
        }
        int c1=0;
        for(int i=0;i<nums.size();i++){
            if(elem==nums[i]){
                c1++;
            }
            if(c1>nums.size()/2){
                return nums[i];
            }
        }
        return -1;
    }
};