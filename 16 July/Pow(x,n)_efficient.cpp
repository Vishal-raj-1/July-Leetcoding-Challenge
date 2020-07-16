class Solution
{
public:
    double positive(double x,int n)
    {
        if(n == 0)
            return 1;
            
        double fact = myPow(x,n/2);
        
        if(n&1)
            return x*fact*fact;
        else
            return fact*fact;
    }
    
    double negative(double x,int n)
    {
        if(n == -1)
            return 1/x;
            
        double fact = myPow(x,n/2);
        
        if(n&1)
            return (1/x)*fact*fact;
        else
            return fact*fact;
    }
    
    double myPow(double x, int n)
    {
        if(n >= 0)
            return positive(x,n);
        else
            return negative(x,n);
    }
};