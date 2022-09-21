#include<bits/stdc++.h>
using namespace std;

int f(vector<vector<int>>&arr,int last,int n,int ind,vector<vector<int>>&dp)
{
	if(ind==0)
	{
		int maxi=0;
		for(int i=0;i<3;++i)
		{
			if(i!=last)
			{
				maxi=max(maxi,arr[0][i]);
			}
		}
		return(maxi);
	}
	if(dp[ind][last]!=-1) return(dp[ind][last]);
	int maxi=0;
	for(int i=0;i<3;++i)
	{
		if(i!=last)
		{
			maxi=max(maxi,arr[ind][i]+f(arr,i,n,ind-1,dp));
		}
	}
	return(dp[ind][last]=maxi);
}

int main()
{
	int n;
	cin>>n;
	vector<vector<int>>arr(n,vector<int>(3));
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<3;++j)
		{
			cin>>arr[i][j];
		}
	}
	
	vector<vector<int>>dp(n,vector<int>(4,-1));
	cout<<f(arr,3,n,n-1,dp);
}
