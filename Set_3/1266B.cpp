//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i < b; i++)

void solve()
{
  ll N;
  cin >> N;
  ll rem = N;
  string ans = "NO";
  if (N >= 15)
  {
    ll x = N % 14;
    if (x <= 6 && x != 0)
      ans = "YES";
  }
  cout << ans << "\n";
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