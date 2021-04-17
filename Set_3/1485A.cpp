#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int a, b, ans = 100, step = 0;
    cin >> a >> b;
    int k;
    for (int i = b; i <= b + 30; i++)
    {
      k = a;
      if (i == 1)
        continue;
      step = 0;
      while (k != 0)
      {
        k /= i;
        step++;
      }
      ans = min(ans, (i - b) + step);
    }
    cout << ans << "\n";
  }
  return 0;
}