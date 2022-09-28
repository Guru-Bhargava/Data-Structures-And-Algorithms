class Solution {
public:
    bool f(vector<int>&arr,vector<vector<int>>&dp,int target,int ind)
    {
        if(target==0) return(true);
        if(ind==0) return(arr[ind]==target);
        if(dp[ind][target]!=-1) return(dp[ind][target]);
        bool pick=false;
        if(target>=arr[ind])
        {
            pick=f(arr,dp,target-arr[ind],ind-1);
        }
        bool notpick=f(arr,dp,target,ind-1);
        return(dp[ind][target]=(pick|notpick));
    }

    bool canPartition(vector<int>& arr) {
        int n=arr.size();
        int total_sum=0;
        for(auto i : arr)
        {
            total_sum+=i;
        }
        int k=total_sum/2;
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        if(total_sum%2) return(0);
        else
        {
            return f(arr,dp,k,n-1);
        }
    }
};
