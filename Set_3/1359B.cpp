#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int n, m, x, y, count = 0, ans = 0;
    cin >> n >> m >> x >> y;
    char A[n][m];
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> A[i][j];
        if (A[i][j] == '.')
          count++;
      }
    }
    int count2 = 0;
    if ((2 * x) <= y)
      ans = count * x;
    else
    {
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m - 1; j++)
        {
          if (A[i][j] == '.' && A[i][j + 1] == '.')
          {
            count2++;
            j++;
          }
        }
      }
      ans = (count2 * y) + (count - (2 * count2)) * x;
    }
    cout << ans << "\n";
  }
  return 0;
}