/*
  Store all words in a stack , then pop each word and store in a string
*/
class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string>st;
        string temp = "",ans = "";
        int i=-1;
        while(s[++i])
        {
            if(s[i] == ' ')
            {
                if(temp != "")
                    st.push(temp);
            
                temp = "";
            }
            else
            {
                temp += s[i];
            }
        }
        
        ans += temp;
        
        while(!st.empty())
        {
            ans += ' ';
            ans += st.top();
            
            st.pop();
        }
        
        //If string have trailing space then 
        //first char of ans will be whitespace
        if(ans != "" && ans[0] == ' ')
            ans = ans.substr(1);
            
        return ans;
    }
};