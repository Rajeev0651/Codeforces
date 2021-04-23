//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, a = -1, b = -1, c = -1;
  cin >> N;
  ll x = sqrt(N);
  for (ll i = 2; i <= x + 1; i++)
  {
    if (N % i == 0)
    {
      if (a == -1)
        a = i;
      else if (b == -1)
      {
        b = i;
        N /= i;
        c = N;
        if (c == 1 || c == a || c == b)
        {
          c = -1;
          break;
        }
      }
      N /= i;
    }
  }
  if (a != -1 && b != -1 && c != -1)
  {
    cout << "YES\n";
    cout << a << " " << b << " " << c << "\n";
  }
  else
    cout << "NO\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}