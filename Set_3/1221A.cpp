//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

int compute(ll A[], int N, int sum)
{
  bool dp[N + 1][sum + 1];
  for (int i = 0; i <= N; i++)
    dp[i][0] = true;
  for (int i = 1; i <= sum; i++)
    dp[0][i] = false;

  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= sum; j++)
    {
      if (A[i - 1] > j)
        dp[i][j] = dp[i - 1][j];
      if (A[i - 1] <= j)
      {
        dp[i][j] = dp[i - 1][j - A[i - 1]] || dp[i - 1][j];
      }
    }
  }
  return dp[N][sum];
}

void solve()
{
  int N;
  cin >> N;
  ll A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  int ans = compute(A, N, 2048);
  if (ans == 1)
    cout << "YES\n";
  else
    cout << "NO\n";
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