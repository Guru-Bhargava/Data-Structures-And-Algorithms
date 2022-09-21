#include<bits/stdc++.h>
using namespace std;

bool f(int ind,vector<int>&v,vector<int>&ds,int s,int n,int sum)
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
			return 1;
		}
		return 0;
	}
	ds.push_back(v[ind]);
	sum+=v[ind];
	if(f(ind+1,v,ds,s,n,sum)==1) return 1;
	sum-=v[ind];
	ds.pop_back();
	if(f(ind+1,v,ds,s,n,sum)==1) return 1;
	return 0;
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
