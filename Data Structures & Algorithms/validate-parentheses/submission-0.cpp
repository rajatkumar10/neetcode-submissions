class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char temp=s[i];
            if(temp=='(' || temp=='[' || temp=='{'){
                st.push(temp);
            }
            else{
                if(!st.empty()){
                    char res=st.top();
                    if((res=='(' && s[i]==')') ||
                        (res=='{' && s[i]=='}') ||
                        (res=='[' && s[i]==']')){
                            st.pop();
                        }
                        else{
                            return false;
                        }
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
