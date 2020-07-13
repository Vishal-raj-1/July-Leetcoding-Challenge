class Solution 
{
public:
    void sets(vector<int>& nums,int index,vector<int>& curr,vector<vector<int> >&ans,int length)
    {
        if(index == length)
        {
            ans.push_back(curr);
            return;
        }
        
        curr.push_back(nums[i]);
        sets(nums,index+1,curr,ans,length);
        curr.pop_back();
        sets(nums,index+1,curr,ans,length);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int> >ans;
        vector<int>curr;
        sets(nums,0,curr,ans,nums.size());
        return ans;
    }
};