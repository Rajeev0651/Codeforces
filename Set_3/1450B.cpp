#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int n, k, ans = -1;
    cin >> n >> k;
    long int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
      cin >> x[i] >> y[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      count = 0;
      for (int j = 0; j < n; j++)
      {
        if (i != j)
        {
          long int dis = abs(x[i] - x[j]) + abs(y[i] - y[j]);
          if (dis <= k)
            count++;
        }
      }
      if (count == n - 1)
      {
        ans = 1;
        break;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}