//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll a, b, x, y, val, ans;
  cin >> a >> b >> x >> y;
  val = __gcd(x, y);
  if (val != 1)
  {
    x /= val;
    y /= val;
  }
  ans = min(a / x, b / y);
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}