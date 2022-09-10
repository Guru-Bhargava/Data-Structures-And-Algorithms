#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
	int prev=1,prev2=0;
	for(int i=2;i<=n;++i)
	{
		int curi=prev+prev2;
		prev2=prev;
		prev=curi;
	}
	return(prev);
}


int main()
{
	int n;
	cin>>n;
	cout<<f(n)<<endl;
}
