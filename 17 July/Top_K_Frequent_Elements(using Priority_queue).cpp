class Solution
{
public :
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        if(nums.empty())
            return {};

        unordered_map<int,int>m;
        int n = nums.size();

        for(int i=0; i<n; i++)
            m[nums[i]]++;

        priority_queue<pair<int,int> >q;

        for(pair<int,int> itr : m)
            q.push({itr.second,itr.first});

        vector<int>ans;

        while(k--)
        {
            ans.push_back(q.top().second());
            pop();
        }

        return ans;
    }
};