#include<bits/stdc++.h>
using namespace std;

int f(vector<int>&arr,vector<vector<int>>&dp,int target,int ind)
{
	if(target==0) return(1);
	if(ind==0) return(arr[0]==target);
	if(dp[ind][target]!=-1) return(dp[ind][target]);
	int pick=0;
	if(target>=arr[ind])
	{
		pick=f(arr,dp,target-arr[ind],ind-1);
	}
	int notpick=f(arr,dp,target,ind-1);
	return(dp[ind][target]=(pick+notpick));
}

int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;++i)
	{
		cin>>v[i];
	}
	int k;
	cin>>k;
	vector<vector<int>>dp(n,vector<int>(k+1,-1));
	cout<<f(v,dp,k,n-1);
}
