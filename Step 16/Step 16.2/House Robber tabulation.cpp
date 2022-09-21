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
	dp1[0]=v1[0];
	for(int i=1;i<n-1;++i)
	{
		int pick=v1[i];
		if(i>1) pick+=dp1[i-2];
		int notpick=dp1[i-1]+0;
		dp1[i]=max(pick,notpick);
	}
	dp2[0]=v2[0];
	for(int i=1;i<n-1;++i)
	{
		int pick=v2[i];
		if(i>1) pick+=dp2[i-2];
		int notpick=dp2[i-1]+0;
		dp2[i]=max(pick,notpick);
	}
	cout<<max(dp1[n-2],dp2[n-2])<<endl;
}
