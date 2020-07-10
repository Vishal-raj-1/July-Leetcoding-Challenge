class Solution 
{
public:
    int arrangeCoins(int n) 
    {
        if(n <= 1)
            return n;
        long i;
        for(i=1;i<n;i++)
        {
            if(i*(i-1)/2<=n && i*(i+1)/2 > n)
                break;
        }
        return (i-1);
    }
};