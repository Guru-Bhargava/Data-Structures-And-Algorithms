#include <bits/stdc++.h>
using namespace std;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define ll long long
void solve(int n)
{
  if(n==0) return;
  cout<<n<<" ";
  solve(--n);
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // ll T;
  ll T = 1;
  // cin >> T;
  while (T--) {
    int n;
    cin>>n;
    solve(n);
  }
}
