class Solution {
public:
bool pali(string &s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
string helper(string &s){
    string ans="";
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') 
        || (s[i]>='0' && s[i]<='9')){
            ans+=s[i];
        }
    }
    return ans;
}
string tolower(string &s){
    string ans="";
    for(auto it:s){
        if(it>='A' && it<='Z'){
            ans+=(it+'a'-'A');
        }
        else{
            ans+=it;
        }
    }
    return ans;
}
    bool isPalindrome(string s) {
        string t=helper(s);
        string a=tolower(t);
        return pali(a);
    }
};
