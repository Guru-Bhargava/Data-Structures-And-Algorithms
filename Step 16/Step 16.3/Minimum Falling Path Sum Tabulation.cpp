class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int j=0;j<m;++j) dp[0][j]=matrix[0][j];
        for(int i=1;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                int up=dp[i-1][j]+matrix[i][j];
                int uldg=1e8;
                if(j+1<m)  uldg=dp[i-1][j+1]+matrix[i][j];
                int urdg=1e8;
                if(j-1>=0) urdg=dp[i-1][j-1]+matrix[i][j];
                dp[i][j]=min(up,min(uldg,urdg));
            }
        }
        int mini=1e8;
        for(int j=0;j<m;++j)
        {
            mini=min(mini,dp[n-1][j]);
        }
        return(mini);
    }
};
