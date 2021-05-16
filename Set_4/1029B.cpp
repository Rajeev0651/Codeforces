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
  int ans = 1, val = 1;
  for (int i = 0; i < N - 1; i++)
  {
    if (A[i + 1] <= A[i] * 2)
    {
      val++;
      ans = max(ans, val);
    }
    else
      val = 1;
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}