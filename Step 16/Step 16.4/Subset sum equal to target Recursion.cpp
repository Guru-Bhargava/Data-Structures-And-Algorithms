#include<bits/stdc++.h>
using namespace std;

bool subset_sum_equals_k(vector<int>&v,int target,int ind)
{
	if(target==0) return(true);
	if(ind==0) return(target==v[ind]);
	bool pick=false;
	if(target>=v[ind])
	{
		pick=subset_sum_equals_k(v,target-v[ind],ind-1);
	}
	bool notpick=subset_sum_equals_k(v,target,ind-1);
	return(pick|notpick);
}

int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;++i) cin>>v[i];
	int target;
	cin>>target;
	cout<<subset_sum_equals_k(v,target,n-1);
}
