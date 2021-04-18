#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    long long int a, b, x, y, ans = LONG_LONG_MAX, j, k, l;
    cin >> x >> y >> a >> b;
    j = (abs(x) * a) + (abs(y) * a);
    k = abs(y - x) * a + (b)*y;
    l = abs(y - x) * a + (b)*x;
    ans = min(min(j, l), k);
    cout << ans << "\n";
  }
  return 0;
}