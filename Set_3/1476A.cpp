#include <bits/stdc++.h>
using namespace std;
int main()
{
  //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int a, b;
    cin >> a >> b;
    if (a == b || b == 1)
      cout << 1 << "\n";
    else if (a < b)
    {
      if (b % a != 0)
        cout << b / a + 1 << "\n";
      else
        cout << b / a << "\n";
    }
    else
    {
      if (a % b != 0)
        cout << 2 << "\n";
      else
        cout << 1 << "\n";
    }
  }
  return 0;
}