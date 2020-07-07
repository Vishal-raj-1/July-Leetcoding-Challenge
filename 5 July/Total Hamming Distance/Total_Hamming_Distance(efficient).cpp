class Solution
{
public:
    int totalHammingDistance(vector<int>& nums) 
    {
        int ans = 0,n=nums.size();

        //Iterate for 32 bits
        for(int i=0; i<32; i++)
        {
            //Count the i'th bit set
            int count = 0;

            for(int j = 0; j<n; j++)
            {
                if(nums[j] & (1 << i))
                    count++;
            }

            ans += count*(n-count);
        }
        return ans;
    }
};