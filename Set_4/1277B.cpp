//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, c;
  cin >> N;
  set<ll> st, p;
  FOR(i, 0, N - 1)
  {
    cin >> c;
    st.insert(c);
  }
  ll ans = 0;
  for (auto i = st.rbegin(); i != st.rend(); i++)
  {
    ll val = *i, x;
    x = val;
    while (x % 2 == 0)
    {
      if (!p.empty())
        if (p.find(x) != p.end())
          break;
      p.insert(x);
      x /= 2;
      ans++;
    }
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