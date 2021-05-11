//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

ll mul(string s)
{
  ll len = s.length();
  ll res = 1;
  for (int i = 0; i < len; i++)
  {
    res *= (s[i] - 48);
  }
  return res;
}
void solve()
{
  ll N;
  cin >> N;
  string s = to_string(N);
  ll len = s.length() - 1;
  len = pow(9, len);
  ll ans = 0, val = 1;
  for (int i = N; i > len; i--)
  {
    val = mul(to_string(i));
    ans = max(ans, val);
  }
  cout << max(len, ans) << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}