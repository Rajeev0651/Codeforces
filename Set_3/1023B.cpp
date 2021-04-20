//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll n, k;
  cin >> n >> k;
  ll left = 1, right = n, ans = 0, sum = 0;
  if (k <= n)
    ans = floor((k - 1) / 2);
  else
  {
    ans = floor((n - (k - n) + 1) / 2);
  }
  if (ans < 0)
    ans = 0;
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}