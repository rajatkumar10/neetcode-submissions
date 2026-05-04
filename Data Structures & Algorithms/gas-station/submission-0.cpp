class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int defi=0,balance=0;
      int start=0;
      for(int i=0;i<gas.size();i++){
          balance+=gas[i]-cost[i];
          if(balance<0){
            defi+=abs(balance);
            start=i+1;
            balance=0;
          }
      }
      if(balance-defi>=0){
        return start;
      }
      return -1;   
    }
};