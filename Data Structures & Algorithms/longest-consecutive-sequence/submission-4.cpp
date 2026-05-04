class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int curr=it;
                int c=1;
                while(st.find(curr+1)!=st.end()){
                    c=c+1;
                    curr=curr+1;
                }
                ans=max(ans,c);
            }
    }
        return ans;
    }
};
