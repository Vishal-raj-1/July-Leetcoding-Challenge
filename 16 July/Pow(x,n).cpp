class Solution
{
public:
    double myPow(double x, int n)
    {
        if(x == 0 || x == 1)
            return x;
    
        double ans = 1;
        
        if(n<0)
        {
            n = n*(-1);
            while(n--)
            {
                ans /= x;
            }
        }
        
        else
        {
            while(n--)
            {
                ans *= x;
            }
        }

        return ans;
    }
};