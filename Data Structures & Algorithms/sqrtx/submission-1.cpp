class Solution {
public:
    int mySqrt(int x) {
        if(x==0)return 0;
       long long  int s=1,e=x,ans=-1;
        while(s<=e){
           long long  int mid=s+(e-s)/2;
            if(mid*mid<=x){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return (int)ans;
    }
};