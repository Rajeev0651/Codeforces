//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, a, b;
  cin >> N >> a >> b;
  if ((N % __gcd(a, b)) == 0)
  {
    for (int i = 0; i <= N; i++)
    {
      ll x = (N - (b * i));
      if (x % a == 0 && x >= 0)
      {
        cout << "YES\n";
        cout << x / a << " " << i << "\n";
        return;
      }
    }
    cout << "NO\n";
  }
  else
  {
    cout << "NO\n";
    return;
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}