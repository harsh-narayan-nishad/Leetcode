class Solution {
public:
    int maxProfit(vector<int>& prices) {
   int sum=0;
   for(int i=1;i<=prices.size()-1;i++){
       if(prices[i]>prices[i-1])
       sum=sum+(prices[i]-prices[i-1]);
   }     
   return sum;
    }
};