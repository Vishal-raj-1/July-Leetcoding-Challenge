class Solution 
{
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) 
    {
        vector<int>temp(8,0);
        //It repeat after 14 days
        int count = n%14;
        
        if(count == 0)
            count = 14;
       
        while(count--)
        {
            for(int i=1;i<7;i++)
            {
                if(cells[i-1] == cells[i+1])
                temp[i] = 1;
                else
                temp[i] = 0;
            }
            cells = temp;
        }
        temp.clear();
        return cells;
    }
};