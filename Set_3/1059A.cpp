//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll n, L, a, s = 0, k, rem;
  cin >> n >> L >> a;
  ll x[n + 2], y[n + 2];
  x[0] = 0;
  y[0] = 0;
  for (ll i = 1; i <= n; i++)
  {
    cin >> x[i] >> y[i];
  }
  x[n + 1] = L;
  y[n + 1] = 0;
  FOR(i, 0, n)
  {
    k = x[i] + y[i];
    rem = x[i + 1] - k;
    s += (rem / a);
  }
  cout << s << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}