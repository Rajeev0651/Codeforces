#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    string a, b;
    cin >> a >> b;
    int alen = a.length(), blen = b.length();
    int LCS[alen + 1][blen + 1], res = 0;
    for (int i = 0; i <= alen; i++)
    {
      for (int j = 0; j <= blen; j++)
      {
        if (i == 0 || j == 0)
          LCS[i][j] = 0;
        else if (a[i - 1] == b[j - 1])
        {
          LCS[i][j] = 1 + LCS[i - 1][j - 1];
          res = max(res, LCS[i][j]);
        }
        else
          LCS[i][j] = 0;
      }
    }
    cout << alen + blen - (2 * res) << "\n";
  }
  return 0;
}