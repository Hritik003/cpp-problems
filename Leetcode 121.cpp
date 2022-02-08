class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> :: iterator f,l;
        int min,max,n=prices.size();
        min = *min_element(prices.begin(),prices.end());
        f = find(prices.begin(),prices.end(),min);
        max = *max_element(f,prices.end());
        
        return max-min;
    }
};
// alternate solution//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit =0;
        int min= prices[0];
        for(int i=1;i<prices.size();++i)
        {
            if(prices[i]>min)
            {
              profit = max(profit, prices[i]-min);
            }
            else 
                min = prices[i];
        }
        return profit;
    }
};
