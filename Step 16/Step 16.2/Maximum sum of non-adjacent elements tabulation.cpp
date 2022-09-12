#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;++i)
	{
		cin>>v[i];
	}
	vector<int>dp(n+1,-1);
	dp[0]=v[0];
	for(int i=1;i<n;++i)
	{
		int notpick=0+dp[i-1];
		int pick=v[i];
		if(i>=2)
		{
			pick+=dp[i-2];
		}
		dp[i]=max(pick,notpick);
	}
	cout<<dp[n-1];
}
