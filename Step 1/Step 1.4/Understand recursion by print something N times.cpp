#include <bits/stdc++.h>
using namespace std;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define ll long long
ll cnt=0;
void solve()
{
  if(cnt==18) return;
  cout<<cnt<<endl;
  cnt++;
  solve();
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // ll T;
  ll T = 1;
  // cin >> T;
  while (T--) {
    solve();
  }
}
