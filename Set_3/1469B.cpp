#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int n, m, sum1, sum2;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
      cin >> b[i];
    sum1 = a[0];
    sum2 = b[0];
    for (int i = 1; i < n; i++)
    {
      a[i] = a[i] + a[i - 1];
      sum1 = max(sum1, a[i]);
    }
    for (int i = 1; i < m; i++)
    {
      b[i] = b[i] + b[i - 1];
      sum2 = max(sum2, b[i]);
    }
    sum1 = sum1 >= 0 ? sum1 : 0;
    sum2 = sum2 >= 0 ? sum2 : 0;
    int k = sum1 + sum2 >= 0 ? sum1 + sum2 : 0;
    cout << k << "\n";
  }
  return 0;
}