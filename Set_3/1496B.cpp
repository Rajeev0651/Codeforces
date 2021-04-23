//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)
void solve()
{
  ll N, k, x;
  cin >> N >> k;
  set<ll> St;
  FOR(i, 0, N - 1)
  {
    cin >> x;
    St.insert(x);
  }
  ll ans = St.size(), left = -1, c = 0;
  for (auto it = St.begin(); it != St.end(); it++)
  {
    if (*it != c)
    {
      left = c;
      break;
    }
    c++;
  }
  if (c > *--St.end())
  {
    ans += (k);
  }
  else
  {
    long double k = c, m = *--St.end();
    ll x = ceil((k + m) / 2);
    if (St.find(x) == St.end())
      ans++;
  }
  if (k == 0)
    ans = St.size();
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