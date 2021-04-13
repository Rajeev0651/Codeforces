#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m, c;
  cin >> n >> m >> c;
  int A[n + 1], B[m + 1];
  for (int i = 1; i <= n; i++)
    cin >> A[i];
  for (int i = 1; i <= m; i++)
    cin >> B[i];
  int presum[m + 1];
  presum[1] = B[1];
  for (int i = 2; i <= m; i++)
  {
    presum[i] = (B[i] + presum[i - 1]);
  }
  int ans[n + 1];
  presum[0] = 0;
  ans[1] = A[1] + presum[1];
  for (int i = 2; i <= n; i++)
  {
    int k = (i - n + m - 1) >= 1 ? max(1, i - n + m - 1) : 0;
    ans[i] = A[i] + presum[min(i, m)] - presum[k];
  }
  for (int i = 1; i <= n; i++)
  {
    cout << ans[i] % c << " ";
  }
  cout << "\n";
  return 0;
}