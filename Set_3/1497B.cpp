#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n, m, ans = 0;
    cin >> n >> m;
    int A[n];
    for (int i = 0; i < n; i++)
    {
      cin >> A[i];
      A[i] %= m;
      if (A[i] == 0)
        ans = 1;
    }
    int B[m];
    memset(B, 0, sizeof(B));
    for (int i = 0; i < n; i++)
    {
      B[A[i]]++;
    }
    for (int i = 1; i <= m / 2; i++)
    {
      ans += (B[i] >= 1 || B[m - i] >= 1) ? 1 : 0;
      ans += max(abs(B[i] - B[m - i]) - 1, 0);
    }
    cout << ans << "\n";
  }
  return 0;
}