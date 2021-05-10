//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll a, b, c;
  cin >> a >> b >> c;
  ll k = min(a, b);
  ll s = min(c, k);
  ll ans = s;
  a = a - s;
  b = b - s;
  if (abs(a - b) >= 1)
  {
    ll x = min(min(a, b), abs(a - b));
    a -= x;
    b -= x;
    ans += x;
  }
  k = min(a, b);
  ans += (2 * k) / 3;
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}