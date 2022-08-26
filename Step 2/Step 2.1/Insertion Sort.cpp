#include <bits/stdc++.h>
using namespace std;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define ll long long
typedef vector<ll> v64;



void insertion_sort(){
  ll n;
  cin>>n;
  v64 v(n);
  forn(i,n) cin>>v[i];
  for(int i=1;i<n;++i)
  {
    int current=v[i];
    int j=i-1;
    while(j>=0 and v[j]>current)
    {
      v[j+1]=v[j];
      j--;
    }
    v[j+1]=current;
  }
  for(int i=0;i<n;++i) cout<<v[i]<<" ";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // ll T;
  ll T = 1;
  //cin >> T;
  while (T--) {
    insertion_sort();
  }
}
