class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(i==0 and j==0) dp[i][j]=grid[0][0];
                else{
                    int up=1e8,down=1e8;
                    if(i>=1) up=dp[i-1][j]+grid[i][j];
                    if(j>=1) down=dp[i][j-1]+grid[i][j];
                    dp[i][j]=min(up,down);
                }
            }
        }
        return(dp[m-1][n-1]);
    }
};
