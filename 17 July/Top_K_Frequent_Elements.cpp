bool cmp(pair<int,int>& a,pair<int,int>& b)
{
    return a.second > b.second;
}

class Solution
{
public :
    vector<int> topKFrequent(vector<int>& nums, int k)
    {

        unordered_map<int,int>m;
        int n = nums.size();

        if(n == 0)
            return {};

        for(int i=0; i<n; i++)
            m[nums[i]]++;

        vector<pair<int,int> >v;

        for(auto itr : m)
            v.push_back(itr);

        sort(v.begin(), v.end(), cmp);

        vector<int>ans;

        for(int i=0; i<k; i++)
            ans.push_back(v[i].first);

        return ans;
    }
};