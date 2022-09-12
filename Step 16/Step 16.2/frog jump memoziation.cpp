/*https://www.codingninjas.com/codestudio/problems/frog-jump_3621012?leftPanelTab=1*/

#include<bits/stdc++.h>
using namespace std;

int f(int ind, vector<int> &ht, vector<int> &dp)
{
	if(ind==0) return(0);
	if(dp[ind]!=-1) return(dp[ind]);
	int onestep=f(ind-1,ht,dp)+abs(ht[ind]-ht[ind-1]);
	int twostep=INT_MAX;
	if(ind>1) twostep=f(ind-2,ht,dp)+abs(ht[ind]-ht[ind-2]);
	return(dp[ind]=min(onestep,twostep));
}

int main()
{
	int n;
	cin>>n;
	vector<int>ht(n);
	for(int i=0;i<n;++i)
	{
		cin>>ht[i];
	}
	vector<int>dp(n+1,-1);
	cout<<f(n-1,ht,dp)<<endl;
}
