class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>st;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')continue;
                string a=string(1,board[i][j])+"ROW"+to_string(i);
                string b=string(1,board[i][j])+"COL"+to_string(j);
                string c=string(1,board[i][j])+"BOX"+to_string(i/3)+"_"+to_string(j/3);
                if(st.find(a)!=st.end() || st.find(b)!=st.end() || st.find(c)!=st.end()){
                    return false;
                }
                st.insert(a);
                st.insert(b);
                st.insert(c);
            }
        }
        return true;
    }
};
