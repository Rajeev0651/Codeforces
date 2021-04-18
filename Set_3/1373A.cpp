#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    long long int a, b, c, x, y;
    cin >> a >> b >> c;
    if (a >= c)
      x = -1;
    else if (a < c)
      x = 1;
    if (a * b <= c)
      y = -1;
    else if (a * b > c)
      y = b;
    cout << x << " " << y << "\n";
  }
  return 0;
}