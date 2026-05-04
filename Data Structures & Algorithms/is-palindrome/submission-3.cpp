class Solution {
public:
string newhelper(string &s){
    string ans="";
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if((ch>=65 && ch<=90)||(ch>=97 && ch<=122)|| (ch>='0' 
        && ch<='9')){
            ans+=ch;
        }
    }
    return ans;
}
bool helper(string &a){
    int s=0,e=a.length()-1;
    while(s<e){
        if(a[s]!=a[e]) return false;
        else {
            s++;
            e--;
        }
    }
    return true;
}
    bool isPalindrome(string s) {
        string a="";
        for(int i=0;i<s.length();i++){
            a+=tolower(s[i]);
        }
        string ans=newhelper(a);
        bool res=helper(ans);
        return res;
    }
};
