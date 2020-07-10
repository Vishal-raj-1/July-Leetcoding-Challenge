class Solution
{
public :
    int islandPerimeter(vector<vector<int>>& grid)
    {
        int perimeter = 0,row = grid.size(),col = grid[0].size();

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j] == 0)
                    continue;

                perimeter += 4;

                if(i > 0)
                    perimeter -= grid[i-1][j];
                if(j > 0)
                    perimeter -= grid[i][j-1];
                if(i < row-1)
                    perimeter -= grid[i+1][j];
                if(j < col-1)
                    perimeter -= grid[i][j+1];
            }
        }
        return perimeter;
    }
};