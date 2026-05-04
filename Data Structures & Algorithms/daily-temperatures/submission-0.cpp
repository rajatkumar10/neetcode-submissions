class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        vector<int>ans(temperatures.size(),0);
        stack<int>st;
        for(int i=0;i<temperatures.size();++i){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                ans[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};