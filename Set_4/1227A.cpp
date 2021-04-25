//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, left = INT_MAX, right = INT_MIN, a, b, c, d;
  cin >> N;
  FOR(i, 1, N)
  {
    cin >> a >> b;
    left = min(b, left);
    right = max(a, right);
  }
  if (right < left)
    cout << 0 << "\n";
  else
    cout << right - left << "\n";
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