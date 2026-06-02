class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++){
            string a=strs[i];
            ans+=to_string(a.length())+"#"+a;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0,n=s.length();
        while(i<n){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            string a=s.substr(j+1,len);
            res.push_back(a);
            i=j+1+len;
        }
        return res;
    }
};
