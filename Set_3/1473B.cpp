#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    string a, b, c, d;
    int alen, blen;
    cin >> a >> b;
    c = a;
    d = b;
    alen = a.length();
    blen = b.length();
    int lcm = alen / __gcd(alen, blen) * blen;
    for (int i = alen; i < lcm; i += alen)
    {
      a += c;
    }
    for (int i = blen; i < lcm; i += blen)
    {
      b += d;
    }
    if (a.compare(b) == 0)
      cout << a << "\n";
    else
      cout << "-1\n";
  }
  return 0;
}