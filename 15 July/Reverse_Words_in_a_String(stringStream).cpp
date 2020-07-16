class Solution 
{
public:
    string reverseWords(string s)
     {
        stringstream ss(s);
        
        string out = "",tmp = "";
        
        while (ss >> tmp) 
        {
            if (out == "") 
                out = tmp;
            else
                 out = tmp + " " + out;
        }
        
        return out;
    }
};