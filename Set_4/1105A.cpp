//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, ans = INT_MAX, val, k, m;
  cin >> N;
  float A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  for (int i = 1; i <= 100; i++)
  {
    val = 0;
    for (int j = 0; j < N; j++)
    {
      m = abs(i - A[j]) - 1;
      if (m > 0)
        val += m;
    }
    if (val <= ans)
    {
      k = i;
      ans = val;
    }
  }
  cout << k << " " << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}