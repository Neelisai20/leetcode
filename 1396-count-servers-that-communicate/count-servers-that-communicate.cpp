class Solution {
public:
  bool solve(vector<vector<int>> &grid,int i,int j)
  {
    for(int a=0;a<grid.size();a++)
    {
        if(a!=i&&grid[a][j]==1) return true;
    }
    for(int a=0;a<grid[0].size();a++)
    {
        if(a!=j&&grid[i][a]==1) return true;
    }
    return false;

  }
    int countServers(vector<vector<int>>& grid) {
        vector<vector<int>> can(grid.size(),vector<int>(grid[0].size(),0));
        int ct=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[1].size();j++)
            {
                if(grid[i][j]==1&&solve(grid,i,j))
                {
                    ct++;
                }
            }
        }
        return ct;
    }
};