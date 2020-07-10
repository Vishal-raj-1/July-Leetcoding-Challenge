class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int> > v;
        vector<vector<int> > res;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                    if(nums[i]+nums[j]+nums[k] == 0)
                    {
                        v.insert({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }

        for(auto x : v)
        {
            res.push_back(x);
        }

        return res;
    }
};