//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll n, k, val, ans = INT_MAX, p;
  cin >> n >> k;
  for (ll i = 1; i < k; i++)
  {
    for (int j = i;; j += k)
    {
      val = i * (j / k);
      if (val == n)
      {
        ans = min(ans, val);
      }
      if (val > n)
        break;
    }
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}