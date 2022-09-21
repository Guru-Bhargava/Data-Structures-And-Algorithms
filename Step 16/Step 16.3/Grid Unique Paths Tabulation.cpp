#include<bits/stdc++.h>
using namespace std;


int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<int>>dp(m,vector<int>(n,0));
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(i==0 and j==0)
			{
				dp[i][j]=1;
			}
			else
			{
				int up=0;
				if(i>0) 
				{
					up=dp[i-1][j];	
				}
				int right=0;
				if(j>0)
				{
					right=dp[i][j-1];
				}
				dp[i][j]=up+right;
			}
		}
	}
	cout<<dp[m-1][n-1];
}
