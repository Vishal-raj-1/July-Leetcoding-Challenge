class Solution
{
public:
    int arrangeCoins(int n)
    {

        long left = 0,right = n,k,cur;

        while(left <= right)
        {
            k = left+(right-left)/2;
            cur = k*(k+1)/2;

            if(cur == n)
                return (int)k;

            else if(cur > n)
                right = k-1;
            else
                left = k+1;
        }
        return (int)right;
    }
};