class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int> > s;
        vector<vector<int> > res;

        for(int i=0; i<n-2; i++)
        {
            int l = i+1, r = n-1;

            while(l < r)
            {
                int sum = nums[i]+nums[l]+nums[r];
                if(sum == 0)
                {
                    s.insert({nums[i],nums[l++],nums[r--]});
                }
                else if(sum < 0)
                    l++;
                else
                    r--;
            }
        }

        for(auto x : s)
        {
            res.push_back(x);
        }

        return res;
    }
};