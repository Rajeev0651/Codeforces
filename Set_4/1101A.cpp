//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll left, right, k;
  cin >> left >> right >> k;
  if (left > k)
  {
    cout << k << "\n";
    return;
  }
  if (right % k == 0)
    right++;
  ll x = k - (right % k);
  if (x == k)
    x = 0;
  cout << right + x << "\n";
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