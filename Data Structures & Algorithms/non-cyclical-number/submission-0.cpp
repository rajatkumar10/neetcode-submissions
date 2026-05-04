class Solution {
public:
int helper(int n){
    int ans=0;
    while(n!=0){
        ans=ans+(n%10)*(n%10);
        n/=10;
    }
    return ans;
}
    bool isHappy(int n) {
     int slow=n,fast=helper(n);
     while(slow!=fast){
        fast=helper(fast);
        fast=helper(fast);
        slow=helper(slow);
     }   
     return fast==1;
    }
};
