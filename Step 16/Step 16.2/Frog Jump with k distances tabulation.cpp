#include<bits/stdc++.h>
using namespace std;

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
	dp[0]=0;
	int minsteps;
	for(int i=1;i<n;++i)
	{
		minsteps=INT_MAX;
		for(int j=1;j<=k;++j)
		{
			int jump;
			if(i>=j)
			{
			jump=dp[i-j]+abs(ht[i]-ht[i-j]);
			}
			minsteps=min(minsteps,jump);
		}
		dp[i]=minsteps;
	}
	cout<<dp[n-1]<<endl;
}
