//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N;
  cin >> N;
  int digit = 0;
  int d = N, ans = 0;
  while (d)
  {
    digit++;
    d /= 10;
  }
  string p = to_string(N);
  if (p.length() > 1)
  {
    if (p[0] < p[1])
      ans += (p[0] - 48);
    else
      ans += (p[0] - 48) - 1;
    ans += (digit - 1) * 9;
    cout << ans << "\n";
  }
  else
    cout << N << "\n";
}

int main()
{
  //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}