#include<bits/stdc++.h>
using namespace std;

int f(int ind, vector<int> &ht, vector<int> &dp,int k)
{
	if(ind==0) return 0;
	if(dp[ind]!=-1) return(dp[ind]);
	int minsteps=INT_MAX;
	for(int i=1;i<=k;++i)
	{
		int m;
		if(ind>i)
		{
		m=f(ind-i,ht,dp,k)+abs(ht[ind]-ht[ind-i]);
		}
		minsteps=min(m,minsteps);
	}
	return(dp[ind]=minsteps);
}

int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	vector<int>ht(n);
	for(int i=0;i<n;++i)
	{
		cin>>ht[i];
	}
	vector<int>dp(n+1,-1);
	cout<<f(n,ht,dp,k)<<endl;
}
