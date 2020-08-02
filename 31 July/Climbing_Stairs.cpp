class Solution
{
public:
    int climbStairs(int n)
    {
        int arr[46] = {0};
        return recur(n,arr);
    }

    int recur(int n)
    {
        if(n <= 1)
            return 1;

        if(arr[n] > 0)
            return arr[n];

        arr[n] = recur(n-2,arr) + recur(n-1,arr);

        return arr[n];
    }
};