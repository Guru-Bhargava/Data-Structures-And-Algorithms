#include <bits/stdc++.h>
using namespace std;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define ll long long
typedef vector<ll> v64;

void reverse(v64 v,ll i,ll n)
{
  if(i>=n/2){
    forn(i,n) cout<<v[i]<<" ";
    return;
  };
  swap(v[i],v[n-i-1]);
  reverse(v,i+1,n);
}

void solve()
{
  ll n;
  cin>>n;
  v64 v(n);
  forn(i,n) cin>>v[i];
  reverse(v,0,n);
  cout<<endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // ll T;
  ll T = 1;
  cin >> T;
  while (T--) {
    solve();
  }
}
