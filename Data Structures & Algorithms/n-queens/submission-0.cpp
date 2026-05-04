class Solution {
public:
void solve(int col,int n,vector<string>&board,vector<vector<string>>&ans,vector<int>&leftdia,vector<int>&lowerdia,vector<int>&upperdia){
if(col==n){
    ans.push_back(board);
    return;
}
for(int row=0;row<n;row++){
    if(leftdia[row]==0 && lowerdia[row+col]==0 && upperdia[n-1+col-row]==0){
        board[row][col]='Q';
        leftdia[row]=1;
        lowerdia[row+col]=1;
        upperdia[n-1+col-row]=1;
        solve(col+1,n,board,ans,leftdia,lowerdia,upperdia);
        board[row][col]='.';
        leftdia[row]=0;
        lowerdia[row+col]=0;
        upperdia[n-1+col-row]=0;
    }
}
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        string s(n,'.');
        vector<string>board(n);
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int>leftdia(n,0);
        vector<int>lowerdia(2*n-1,0);
        vector<int>upperdia(2*n-1,0);
        solve(0,n,board,ans,leftdia,lowerdia,upperdia);
        return ans;
    }
};