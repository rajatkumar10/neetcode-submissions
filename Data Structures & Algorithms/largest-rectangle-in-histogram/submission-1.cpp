class Solution {
public:
vector<int>nextsmaller(vector<int>&arr){
    stack<int>st;
    st.push(-1);
    int n=arr.size();
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        while(st.top()!=-1 && arr[st.top()]>=arr[i]){
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}
vector<int>prevsmaller(vector<int>&arr){
      stack<int>st;
    st.push(-1);
    int n=arr.size();
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        while(st.top()!=-1 && arr[st.top()]>=arr[i]){
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}
    int largestRectangleArea(vector<int>&arr) {
       vector<int>next=nextsmaller(arr);     
       vector<int>prev=prevsmaller(arr);
       int ans=INT_MIN;
       for(int i=0;i<arr.size();i++){
        if(next[i]==-1){
            next[i]=next.size();
        }
       }
       for(int i=0;i<arr.size();i++){
        int res=(next[i]-prev[i]-1)*arr[i];
        ans=max(ans,res);
       } 
       return ans;
    }
};