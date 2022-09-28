#include<bits/stdc++.h>
using namespace std;

bool f(vector<int>&arr,vector<vector<int>>&dp,int target,int ind)
{
	if(target==0) return(1);
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

int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	int target;
	cin>>target;
	vector<vector<int>>dp(n,vector<int>(target+1,-1));
	cout<<f(arr,dp,target,n-1);
}
