/*Runtime: 0 ms, faster than 100.00% of C++ online submissions for Climbing Stairs.*/

class Solution {
public:
    int f(int n,vector<int>&dp)
    {
        if(n==0) return 1;
        if(n==1) return 1;
        if(dp[n]!=-1) return(dp[n]);
        return(dp[n]=f(n-1,dp)+f(n-2,dp));
    }
    
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int k=f(n,dp);
        return(k);
    }
};
