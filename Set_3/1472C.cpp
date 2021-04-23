//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, ans = -1, val;
  cin >> N;
  ll A[N + 1];
  FOR(i, 1, N)
  cin >> A[i];
  ll dp[200005];
  memset(dp, -1, sizeof(dp));
  for (int i = N; i >= 1; i--)
  {
    int x = i;
    val = 0;
    while (x <= N)
    {
      val += A[x];
      x = x + A[x];
      if (x > N)
        continue;
      if (dp[x] != -1)
      {
        val += dp[x];
        break;
      }
    }
    dp[i] = val;
  }
  for (int i = 1; i <= N; i++)
  {
    ans = max(ans, dp[i]);
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