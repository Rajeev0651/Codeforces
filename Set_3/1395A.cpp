#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int a, b, c, d, odd = 0, even = 0;
    string ans = "No";
    cin >> a >> b >> c >> d;
    if (a % 2 == 0)
      even++;
    else
      odd++;
    if (b % 2 == 0)
      even++;
    else
      odd++;
    if (c % 2 == 0)
      even++;
    else
      odd++;
    if (d % 2 == 0)
      even++;
    else
      odd++;
    if (even >= 3)
      ans = "Yes";
    if (a != 0 && b != 0 && c != 0)
    {
      a--;
      b--;
      c--;
      d++;
    }
    even = 0;
    odd = 0;
    if (a % 2 == 0)
      even++;
    else
      odd++;
    if (b % 2 == 0)
      even++;
    else
      odd++;
    if (c % 2 == 0)
      even++;
    else
      odd++;
    if (d % 2 == 0)
      even++;
    else
      odd++;
    if (even >= 3)
      ans = "Yes";
    cout << ans << "\n";
  }
  return 0;
}