#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>ht(n);
	for(int i=0;i<n;++i) 
	{
		cin>>ht[i];
	}
	// vector<int>dp(n+1,-1);
	// dp[0]=0;
	int prev=0;
	int prev2=0;
	for(int i=1;i<n;++i)
	{
		int onestep=prev+abs(ht[i-1]-ht[i]);
		int twostep=INT_MAX;
		if(i>1)
		{
			twostep=prev2+abs(ht[i-2]-ht[i]);
		}
		int curi=min(onestep,twostep);
		prev2=prev;
		prev=curi;
	}
	cout<<prev;
}
