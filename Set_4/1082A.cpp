//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int n, x, y, d, p = 0, q;
  cin >> n >> x >> y >> d;
  q = n;
  int count = 0;
  while (q - d >= 1)
  {
    p = q - d;
    q -= d;
    count++;
  }
  int diff = x % d;
  if ((abs(x - y) % d) == 0)
  {
    cout << abs(y - x) / d;
    return;
  }
  for (int i = 1; i <= p; i++)
  {
    int diff = i % d;
    if (((y % d) - diff) == 0)
    {
      cout << count + (p - i) + ((y - i) / d);
      return;
    }
  }
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