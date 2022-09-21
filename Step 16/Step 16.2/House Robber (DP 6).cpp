#include<bits/stdc++.h>
using namespace std;

int f(int ind,vector<int>&v,vector<int>&dp)
{
	if(ind==0) return(v[0]);
	if(dp[ind]!=-1) return(dp[ind]);
	if(ind==2) return(dp[2]=max(v[1],v[0]));
	int pick=f(ind-2,v,dp)+v[ind];
	int notpick=f(ind-1,v,dp)+0;
	return(dp[ind]=max(pick,notpick));
}

int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	vector<int>dp1(n,-1);
	vector<int>dp2(n,-1);
	vector<int>v1,v2;
	for(int i=0;i<n-1;++i)
	{
		v1.push_back(v[i]);
	}
	for(int i=1;i<n;++i)
	{
		v2.push_back(v[i]);
	}
	int a=f(n-1,v1,dp1);
	int b=f(n-1,v2,dp2);
	cout<<max(a,b);
}
