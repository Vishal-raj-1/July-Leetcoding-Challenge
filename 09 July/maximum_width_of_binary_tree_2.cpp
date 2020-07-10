class Solution 
{
public:
    int widthOfBinaryTree(TreeNode* root) 
    {
        if(!root)
            return 0;
        
        deque<TreeNode*>dq;
        dq.push_back(root);
        
        int Max = 1;
        
        while(!dq.empty())
        {
            while(!dq.empty() && !dq.front())
                dq.pop_front();
            
            while(!dq.empty() && !dq.back())
                dq.pop_back();
            
            int size = dq.size();
            Max = max(Max,size);
            
            while(size--)
            {
                TreeNode* temp = dq.front();
                dq.pop_front();
            
                if(!temp)
                {
                    dq.push_back(NULL);
                    dq.push_back(NULL);
                }
                else
                {
                    dq.push_back(temp->left);
                    dq.push_back(temp->right);
                }
            }
            
        }
        return Max;
    }
};