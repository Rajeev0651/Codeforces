//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll a, b, ans = 1;
  cin >> a >> b;
  for (ll i = a + 1; i <= b; i++)
  {
    ans = ans * (i % (ll)10);
    ans %= (ll)10;
    if (ans == 0)
      break;
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}