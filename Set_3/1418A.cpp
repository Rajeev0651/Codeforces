#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    long long int x, y, k, req, step = 0, ans = -1;
    cin >> x >> y >> k;
    req = (y * k) + k;
    if (x >= req)
    {
      ans = 1;
    }
    else
    {
      ans = (req - x) / (x - 1);
      if ((req - x) % (x - 1) != 0)
        ans++;
      ans++;
    }
    cout << ans + k << "\n";
  }
  return 0;
}