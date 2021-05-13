//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, K;
  cin >> N >> K;
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  int ans = 0, val = 0;
  for (int i = 0; i < N - 1; i++)
  {
    if (A[i] != A[i + 1])
    {
      val++;
      ans = max(ans, val);
    }
    else
    {
      ans = max(ans, val);
      val = 0;
    }
  }
  cout << ans + 1 << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}