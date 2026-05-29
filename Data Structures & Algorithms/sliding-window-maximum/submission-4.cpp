class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>dq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            // agar numbrr bada hai pechse se
            while(!dq.empty() && nums[i]>nums[dq.back()]){
                dq.pop_back();
            }
            // index out ho
            while(!dq.empty() && i-k>=dq.front()){
                dq.pop_front();
            }
            dq.push_back(i);
            if(i>=k-1)ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};
