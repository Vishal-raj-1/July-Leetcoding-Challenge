class Solution
{
public:
    Node* flatten(Node* head)
    {
        if(!head)
            return NULL;

        Node *curr = head, *tail = head;
        stack<Node*>st;

        while(curr)
        {
            if(curr->child)
            {
                if(curr->next)
                {
                    st.push(curr->next);
                    curr->next->prev = NULL;
                }
            
                curr->next = curr->child;
                curr->child->prev = curr;
                curr->child = NULL;
            
            }
            tail = curr;
            curr = curr->next;
        }

        while(!st.empty())
        {
            curr = st.top();
            st.pop();
            tail->next = curr;
            curr->prev = tail;
            while(curr)
            {
                tail = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};