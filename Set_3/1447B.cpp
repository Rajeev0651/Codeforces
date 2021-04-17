#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int val = 101, flag = 0, sum = 0;
    int n, m;
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> A[i][j];
        if (A[i][j] < 0)
          flag++;
        val = min(val, abs(A[i][j]));
        sum += abs(A[i][j]);
      }
    }
    if (flag % 2 == 0)
      cout << sum << "\n";
    else
    {
      cout << sum - abs(2 * val) << "\n";
    }
  }
  return 0;
}