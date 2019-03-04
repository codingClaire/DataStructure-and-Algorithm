class Solution
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid)
    {
        vector<int> line1,line2;
        int col=grid.size(),row=grid[0].size();
        for(int i=0;i<col;i++)
        {
            int max1=grid[i][0];
            for(int j=1;j<row;j++)
            {
                if(grid[i][j]>max1)
                    max1=grid[i][j];
            }
            line1.push_back(max1);
        }

         for(int i=0;i<row;i++)
         {
            int max2=grid[0][i];
            for(int j=1;j<col;j++)
            {
                if(grid[j][i]>max2)
                    max2=grid[j][i];
            }
            line2.push_back(max2);
        }
        int res=0;
        for(int i=0;i<col;i++)
        {
            for(int j=0;j<row;j++)
            {
                int mini=min(line1[i],line2[j]);
                res+=(mini-grid[i][j]);
            }
        }
        return res;
    }
};
