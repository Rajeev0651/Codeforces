//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a == d)
  {
    if (a == 0 && c != 0)
      cout << 0 << "\n";
    else
      cout << "1\n";
  }

  else
    cout << "0\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}