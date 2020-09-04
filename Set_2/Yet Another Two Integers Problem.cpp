#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    long int a, b, c, ans;
    cin >> a >> b;
    c = abs(b - a);
    ans = c / 10;
    if (c % 10 != 0)
      ans++;
    cout << ans << "\n";
  }
  return 0;
}