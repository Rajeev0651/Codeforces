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
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  int index[N + 1], ans = INT_MAX;
  memset(index, -1, sizeof(index));
  for (int i = 0; i < N; i++)
  {
    int val = A[i];
    if (index[val] != -1)
    {
      ans = min(ans, i - index[val] + 1);
      index[val] = i;
    }
    else
      index[val] = i;
  }
  if (ans == INT_MAX)
    cout << "-1\n";
  else
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