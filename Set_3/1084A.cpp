//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, ans = INT_MAX, x = -1, elec = 0;
  cin >> N;
  int A[N + 1];
  FOR(i, 1, N)
  cin >> A[i];
  for (int i = 1; i <= N; i++)
  {
    x = i;
    elec = 0;
    for (int j = 1; j <= N; j++)
    {
      elec += ((max(x, j) - 1) * 4 * A[j]);
    }
    ans = min(ans, elec);
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}