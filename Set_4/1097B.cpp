//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

bool fun(int A[], int sum, int N)
{
  bool dp[N + 1][sum + 1];
  for (int i = 1; i <= N; i++)
    dp[i][0] = true;
  for (int i = 1; i <= sum; i++)
    dp[0][i] = false;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= sum; j++)
    {
      if (j < A[i - 1])
        dp[i][j] = dp[i - 1][j];
      if (j >= A[i - 1])
        dp[i][j] = dp[i - 1][j] || dp[i - 1][j - A[i - 1]];
    }
  }
  return dp[N][sum];
}
void solve()
{
  int N, sum = 0;
  cin >> N;
  int A[N];
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    sum += A[i];
  }
  sum = sum % 360;
  cout << sum << "\n";
  if (sum % 2 == 0)
  {
    bool ans = fun(A, sum / 2, N);
    if (ans)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  else
    cout << "NO\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}