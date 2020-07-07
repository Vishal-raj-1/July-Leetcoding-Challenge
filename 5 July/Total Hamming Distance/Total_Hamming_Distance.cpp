class Solution
{
public:
    int totalHammingDistance(vector<int>& nums) 
    {
       int count = 0,n = nums.size();
    
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               count += __builtin_popcount(nums[i]^nums[j]);
            }
        }
        return count;
    }
};