#include<bits/stdc++.h>
using namespace std;

int f(int ind,vector<int>&v,vector<int>&ds,int s,int n,int sum)
{
	if(ind==n)
	{
		if(s==sum)
		{
			return 1;
		}
		return 0;
	}
	ds.push_back(v[ind]);
	sum+=v[ind];
	int l=f(ind+1,v,ds,s,n,sum);
	sum-=v[ind];
	ds.pop_back();
	int r=f(ind+1,v,ds,s,n,sum);
	return(l+r);
}

int main()
{
	int n;
	cin>>n;
	int s;
	cin>>s;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	vector<int>ds;
	cout<<f(0,v,ds,s,n,0);
}
