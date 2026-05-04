class Solution {
public:
void helper(int ind,string &digits,string out,vector<string>&ans,
string hashing[]){
    if(ind==digits.length()){
        ans.push_back(out);
        return;
    }
    string mp=hashing[digits[ind]-'0'];
    for(auto c:mp){
        out.push_back(c);
        helper(ind+1,digits,out,ans,hashing);
        out.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        vector<string>ans;
        string out="";
        string hashing[]={"","","abc","def","ghi","jkl","mno","pqrs",
        "tuv","wxyz"};
        helper(0,digits,out,ans,hashing);
        return ans;
    }
};
