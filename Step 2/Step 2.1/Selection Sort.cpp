#include <bits/stdc++.h>
using namespace std;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define ll long long
typedef vector<ll> v64;



void selection_sort(){
  ll n;
  cin>>n;
  v64 v(n);
  forn(i,n) cin>>v[i];
  for(int i=0;i<n-1;++i)
  {
    int mini=i;
    for(int j=i+1;j<n;++j)
    {
      if(v[j]<v[mini]) mini=j;
    }
    swap(v[i],v[mini]);
  }
  forn(i,n) cout<<v[i]<<" ";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // ll T;
  ll T = 1;
  //cin >> T;
  while (T--) {
    selection_sort();
  }
}
