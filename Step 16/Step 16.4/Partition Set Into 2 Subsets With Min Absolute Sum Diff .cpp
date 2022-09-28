#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	int k=0;
	for (int i = 0; i < n; ++i)
	{
		k+=v[i];
	}
	vector<vector<bool>>dp(n,vector<bool>(k+1,0));
	for(int i=0;i<n;++i)
	{
		dp[i][0]=true;
	}
	dp[0][v[0]]=true;
	for(int ind=1;ind<n;++ind)
	{
		for(int target=1;target<=k;++target)
		{
			bool pick=false;
			if(target>=v[ind])
			{
				pick=dp[ind-1][target-v[ind]];
			}
			bool notpick=dp[ind-1][target];
			dp[ind][target]=pick+notpick;
		}
	}
	int mini=1e9;
	for(int i=0;i<=k/2;++i)
	{
		if(dp[n-1][i])
		{
			mini=min(mini,abs((k-i)-i));
		}
	}
	cout<<mini;
}
