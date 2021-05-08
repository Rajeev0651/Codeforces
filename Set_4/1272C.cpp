//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, K;
  cin >> N >> K;
  string S;
  char c;
  cin >> S;
  set<ll> stc;
  FOR(i, 0, K - 1)
  {
    cin >> c;
    stc.insert(c);
  }
  ll len = S.length();
  set<ll> sti;
  for (ll i = 0; i < len; i++)
  {
    if (stc.find(S[i]) == stc.end())
    {
      sti.insert(i + 1);
    }
  }
  ll pre = 1, ans = 0, val, diff;
  for (auto i = sti.begin(); i != sti.end(); i++)
  {
    val = *i, diff;
    diff = val - pre;
    pre = val + 1;
    ans += ((diff * (diff + 1)) / 2);
  }
  diff = len + 1 - pre;
  ans += ((diff * (diff + 1)) / 2);
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}