class Solution {
public:
void helper(int open,int close,string move,int n,vector<string>&ans){
    if(open==close && open+close==2*n){
        ans.push_back(move);
        return;
    }
    if(open<n){
        helper(open+1,close,move+'(',n,ans);
    }
    if(close<open){
        helper(open,close+1,move+')',n,ans);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(0,0,"",n,ans);
        return ans;
    }
};