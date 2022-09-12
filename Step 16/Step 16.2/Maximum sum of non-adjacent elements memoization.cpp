#include<bits/stdc++.h>
using namespace std;


int f(int ind, vector<int> &v ,vector<int> &dp)
{
	if(ind==0) return(v[ind]);
	if(dp[ind]!=-1) return(dp[ind]);
	int pick=v[ind]+f(ind-2,v,dp);
	int notpick=0+f(ind-1,v,dp);
	return(dp[ind]=max(pick,notpick));
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
	vector<int>dp(n+1,-1);
	cout<<f(n,v,dp)<<endl;
}
