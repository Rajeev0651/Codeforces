//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

int fun(string S)
{
  int val = INT_MIN, len = S.length();
  for (int i = 0; i < len; i++)
  {
    val = max(val, S[i] - 48);
  }
  return val;
}
void solve()
{
  ll k;
  string S;
  cin >> S >> k;
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