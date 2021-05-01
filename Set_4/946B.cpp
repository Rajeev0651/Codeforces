//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll a, b, q = 2;
  cin >> a >> b;
  while (1)
  {
    if (a <= 0 || b <= 0)
      break;
    else if (a >= 2 * b)
    {
      ll k = (a - (q * b)) / (q * b);
      if (((a - 2 * b) % (q * b)) != 0 || (a == q * b))
        k++;
      a = a - (q * b * k);
    }
    else if (b >= q * a)
    {
      ll k = (b - (q * a)) / (q * a);
      if (((b - 2 * a) % (q * a)) != 0 || b == q * a)
        k++;
      b = b - (q * a * k);
    }
    else
      break;
  }
  if (a < 0)
    a = 0;
  if (b < 0)
    b = 0;
  cout << a << " " << b << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}