//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll x, y, N, ans = 0;
  cin >> x >> y >> N;
  if (N % x == y)
    cout << N << "\n";
  else
  {
    int k = N % x;
    N -= k;
    if (y > k)
      N -= x;
    if (N >= 0)
    {
      cout << N + y << "\n";
    }
    else
      cout << 0 << "\n";
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