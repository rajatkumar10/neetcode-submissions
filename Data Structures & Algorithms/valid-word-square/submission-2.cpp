class Solution {
public:
    bool validWordSquare(vector<string>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<arr[i].size();j++){
                if(j>=n || i>=arr[j].size()){
                    return false;
                }
                if(arr[i][j]!=arr[j][i]){
                    return false;
                }
            }
        }
        return true;
    }
};
