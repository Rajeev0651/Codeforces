#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int a, b, c;
    long int Len[10] = {1, 10, 100, 1000,
                        10000, 100000, 1000000,
                        10000000, 100000000};
    int x1 = -1, x2 = -1;
    cin >> a >> b >> c;
    if (a == c)
    {
      x1 = c;
    }
    if (b == c)
    {
      x2 = c;
    }
    if (x1 = -1)
    {
      x1 = Len[a - 1] + Len[c - 1];
    }
    if (x2 = -1)
    {
      x2 = Len[b - 1] + Len[c - 1];
    }
    if (x1 == x2)
      x1 += Len[c - 1];
    cout << x1 << " " << x2 << "\n";
  }
  return 0;
}