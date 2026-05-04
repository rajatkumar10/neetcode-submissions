class Solution {
public:
    int countSeniors(vector<string>& arr) {
       int ans=0;
       for(int i=0;i<arr.size();i++){
        int a=stoi(arr[i].substr(11,2));
        if(a>60)ans++;
       }
       return ans;
    }
};