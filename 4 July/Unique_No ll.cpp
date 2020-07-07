class Solution
{
public:
    int nthUglyNumber(int n)
    {
        if(n == 0)
            return 0;

        vector<int>ugly;
        ugly.push_back(1);

        int temp,i=0,j=0,k=0;

        while(ugly.size() < n)
        {
            int temp1 = ugly[i]*2, temp2 = ugly[j]*3, temp3 = ugly[k]*5;

            temp = min(temp1,min(temp2,temp3));

            ugly.push_back(temp);
            
            if(temp == temp1)
                i++;
            if(temp == temp2)
                j++;
            if(temp == temp3)
                k++;
        }
        return ugly[n-1];
    }
};