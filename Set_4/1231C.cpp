//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int n, m;
  cin >> n >> m;
  int A[n][m];
  FOR(i, 0, n - 1)
  FOR(j, 0, m - 1)
  cin >> A[i][j];
  int sum = 0, val, flag = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    for (int j = m - 1; j >= 0; j--)
    {
      if (A[i][j] == 0)
      {
        val = min(A[i][j + 1], A[i + 1][j]) - 1;
        sum += val;
        A[i][j] = val;
      }
      else
        sum += A[i][j];
      if (i == 0 && j == 0)
        continue;
      if (j == 0 && A[i][j] > A[i - 1][j])
        continue;
      if (i == 0 && A[i][j] > A[i][j - 1])
        continue;
      if ((A[i][j] <= A[i - 1][j] || A[i][j] <= A[i][j - 1]))
      {
        flag = 1;
        break;
      }
    }
    if (flag == 1)
    {
      sum = -1;
      break;
    }
  }
  cout << sum << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}