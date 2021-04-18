#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int n, m;
    cin >> n >> m;
    char A[n][m];
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        A[i][j] = 'B';
      }
    }
    A[0][m - 1] = 'W';
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cout << A[i][j];
      }
      cout << "\n";
    }
  }
  return 0;
}