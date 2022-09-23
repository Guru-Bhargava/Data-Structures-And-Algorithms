class Solution {
public:
    int f(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>&dp)
    {
        if(j<0 or j>=matrix[0].size()) return(1e8);
        if(i==0) return(matrix[i][j]);
        if(dp[i][j]!=-1) return(dp[i][j]);
        int up=INT_MAX;
        if(i>=1) up=f(i-1,j,matrix,dp)+matrix[i][j];
        int uldg=INT_MAX;
        if(i>=1 and j+1<matrix[0].size()) uldg=f(i-1,j+1,matrix,dp)+matrix[i][j];
        int urdg=INT_MAX;
        if(i>=1 and j>=1) urdg=f(i-1,j-1,matrix,dp)+matrix[i][j];
        return(dp[i][j]=min(up,min(uldg,urdg)));
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int mini=1e8;
        for(int i=0;i<m;++i)
        {
            mini=min(mini,f(n-1,i,matrix,dp));
        }
        return(mini);
    }
};
