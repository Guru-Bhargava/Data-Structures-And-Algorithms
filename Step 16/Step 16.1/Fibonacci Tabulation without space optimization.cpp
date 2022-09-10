#include<bits/stdc++.h>
using namespace std;

vector<int>f(int n,vector<int>&dp)
{
	for(int i=2;i<=n;++i)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return(dp);
}


int main()
{
	int n;
	cin>>n;
	vector<int>dp(n+1,0);
	dp[0]=0,dp[1]=1;
	vector<int>ans=f(n,dp);
	cout<<ans[n]<<endl;
}
