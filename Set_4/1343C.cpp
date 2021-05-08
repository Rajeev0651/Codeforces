//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N;
  cin >> N;
  ll A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  ll ans = 0, val = 0, flag;
  for (int i = 0; i < N; i++)
  {
    if (A[i] < 0)
    {
      ans += val;
      val = 0;
    }
    if (A[i] > 0)
    {
      val = max(val, A[i]);
    }
    if (i == N - 1)
      ans += val;
  }
  val = LONG_MIN;
  for (int i = 0; i < N; i++)
  {
    if (A[i] > 0 && val != LONG_MIN)
    {
      ans += val;
      val = LONG_MIN;
    }
    if (A[i] < 0)
    {
      val = max(val, A[i]);
    }
    if (i == N - 1 && val != LONG_MIN)
      ans += val;
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