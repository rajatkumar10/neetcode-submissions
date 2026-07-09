class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int s=0,mid=0,e=n-1;
        while(mid<=e){
            if(arr[mid]==0){
                swap(arr[s],arr[mid]);
                s++;
                mid++;
            }else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[e]);
                e--;
            }
        }
    }
};