class Solution
{
public :
    int Profit(int index, int BuyorSell,vector<int>& prices)
    {
        if(index >= prices.size())
            return 0;

        int x = 0;
        if(BuyorSell == 0)
        {
            int buy = Profit(index+1,1,prices) - prices[index];
            int nobuy = Profit(index+1,0,prices);
            x = max(buy,nobuy);
        }
        else
        {
            int sell = Profit(index+2,0,prices) + prices[index];
            int nosell = Profit(index+1,1,prices);
            x = max(sell,nosell);
        }
        return x;
    }

    int maxProfit(vector<int>& prices)
    {
        return Profit(0,0,prices);
    }
};