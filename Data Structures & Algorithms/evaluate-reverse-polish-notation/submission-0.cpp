class Solution {
public:
    int evalRPN(vector<string>&arr) {
        int n=arr.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(arr[i]=="+" || arr[i]=="-" || 
            arr[i]=="*" || arr[i]=="/"){
                int a=st.top();st.pop();
                int b=st.top();st.pop();
                int ans=0;
                if(arr[i]=="+") ans=b+a;
                else if(arr[i]=="-") ans=b-a;
                else if(arr[i]=="*") ans=b*a;
                else if(arr[i]=="/")ans=b/a;
                st.push(ans);
            }
            else{
                st.push(stoi(arr[i]));
            }
        }
        return st.top();
    }
};