class Solution 
{
public :
    int hammingDistance(int x, int y) 
    {
        int n = x^y,count = 0;
        
        while(n)
        {
            if(n&1)
            count++;
            
            n >>= 1;
        }
        
        return count;
    }
};