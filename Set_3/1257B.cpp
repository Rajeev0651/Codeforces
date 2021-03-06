//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i < b; i++)

void solve()
{
  ll x, y;
  string ans = "NO";
  cin >> x >> y;
  if (x >= y)
    ans = "YES";
  ll k = x;
  while (k <= y)
  {
    if (k % 2 != 0)
    {
      k--;
      if (k == 0 || k == 2)
        break;
    }
    k = (k * 3) / 2;
    if (k >= y)
    {
      ans = "YES";
      break;
    }
  }
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