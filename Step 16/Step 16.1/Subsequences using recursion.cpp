#include<bits/stdc++.h>
using namespace std;

void printf(int ind,vector<int> &ds,int arr[],int n)
{
	if(ind == n)
	{
		if(ds.size()==0) cout<<"{}"<<endl;
		else
		{
			for(auto it:ds)
			{
				cout<<it<<" ";
			}
			cout<<endl;
			return;	
		}
	}
	ds.push_back(arr[ind]);
	printf(ind+1,ds,arr,n);
	ds.pop_back();
	printf(ind+1,ds,arr,n);
}

int main()
{
	int arr[]={3,1,2};
	int n=3;
	vector<int>ds;
	printf(0,ds,arr,n);
}
