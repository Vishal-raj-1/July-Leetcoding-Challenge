class Solution
 {
public:
    int maxProfit(vector<int>& prices)
     {
        int held = INT_MIN, sold = 0, cooled = 0;
        for (const auto p : prices) 
        {
            held = max(held, cooled - p);
            cooled = sold;
            sold = max(sold, held + p);
        }
        
        return sold;
    }
};