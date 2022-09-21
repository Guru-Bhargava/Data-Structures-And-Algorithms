#include<bits/stdc++.h>
using namespace std;

void f(int ind,vector<int>&v,vector<int>&ds,int s,int n,int sum)
{
	if(ind==n)
	{
		if(s==sum)
		{
			for(auto it:ds)
			{
				cout<<it<<" ";
			}
			cout<<endl;
		}
		return;
	}
	ds.push_back(v[ind]);
	sum+=v[ind];
	f(ind+1,v,ds,s,n,sum);
	sum-=v[ind];
	ds.pop_back();
	f(ind+1,v,ds,s,n,sum);
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
	f(0,v,ds,s,n,0);
}
