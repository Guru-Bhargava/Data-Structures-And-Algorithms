class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int f(int ind, int v[] ,vector<int> &dp)
    {
    	if(ind==0) return(v[ind]);
    	if(dp[ind]!=-1) return(dp[ind]);
    	int pick=v[ind]+f(ind-2,v,dp);
    	int notpick=0+f(ind-1,v,dp);
    	return(dp[ind]=max(pick,notpick));
    }

    int FindMaxSum(int arr[], int n)
    {
        vector<int>dp(n+1,-1);
	    return (f(n-1,arr,dp));
    }
};
