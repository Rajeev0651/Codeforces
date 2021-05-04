//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int ans = 0;
  ans = 2 * (abs(x2 - x1) + 1 + abs(y2 - y1) + 1);
  if (x1 == x2 || y1 == y2)
    ans += 2;
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}