#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int n, m, k, ans = -1;
    cin >> n >> m >> k;
    int maxj = n / k;
    if (maxj >= m)
      ans = m;
    else
    {
      int remj = m - maxj;
      float b = remj;
      int q = ceil(b / (k - 1));
      ans = maxj - q;
    }
    cout << ans << "\n";
  }
  return 0;
}