/*Memoization*/

class Solution {
public:
    
    int f(int i,int j,vector< vector< int> > &mat,vector<vector<int>> &dp){
        if(i==0 and j==0)
        {
            if(mat[i][j]==1) return(0);
            else return(1);
        }
        if(i<0 or j<0) return(0);
        if(i>=0 and j>=0 and mat[i][j]==1) return(0);
        if(dp[i][j]!=-1) return(dp[i][j]);
        int up=f(i-1,j,mat,dp);
        int left=f(i,j-1,mat,dp);
        return(dp[i][j]=up+left);
}

    int uniquePathsWithObstacles(vector<vector<int>>& mat) {  
        int n=mat.size();
        int m=mat[0].size();
         vector<vector<int>> dp(n,vector<int>(m,-1));
         return f(n-1,m-1,mat,dp);
    }
};



/*Tabulation*/
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {  
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(mat[i][j]==1) dp[i][j]=0;
                else if(i==0 and j==0) dp[i][j]=1;
                else{
                    int up=0;
                    if(i>=1) up=dp[i-1][j];
                    int down=0;
                    if(j>=1) down=dp[i][j-1];
                    dp[i][j]=up+down;
                }
            }
        }
        return(dp[m-1][n-1]);
    }
};
