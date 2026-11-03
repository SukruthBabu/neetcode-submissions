class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        vector<int> profits;

        for(int i = 0; i < prices.size(); i++)
        {
            int maxPrice = *max_element(prices.begin() + i, prices.end());
            if(prices[i] < maxPrice)
            {
                profits.push_back(maxPrice - prices[i]);
            }
        }

        if(!profits.empty())
        {
            return *max_element(profits.begin(), profits.end());
        }

        return 0;
    }
};
