#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	vector<vector<bool>>dp(n,vector<bool>(k+1,0));
	for(int i=0;i<n;++i)
	{
		dp[i][0]=true;
	}
	dp[0][arr[0]]=true;
	for(int ind=1;ind<n;ind++)
	{
		for(int target=1;target<=k;target++)
		{
			bool pick=false;
			if(target>=arr[ind])
			{
				pick=dp[ind-1][target-arr[ind]];
			}
			bool notpick=dp[ind-1][target];
			dp[ind][target]=pick|notpick;
		}
	}
	cout<<dp[n-1][k];
}
