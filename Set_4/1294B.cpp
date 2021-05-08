//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, x, y;
  cin >> N;
  vector<pair<int, int>> vp;
  for (int i = 0; i < N; i++)
  {
    cin >> x >> y;
    vp.push_back(make_pair(x, y));
  }
  sort(vp.begin(), vp.end());
  int len = vp.size();
  string ans = "YES";
  for (int i = 1; i < len; i++)
  {
    if (len > 1)
      if (vp[i].second < vp[i - 1].second)
      {
        cout << "NO\n";
        return;
      }
  }
  x = 1, y = 1;
  cout << ans << "\n";
  for (int i = 0; i < len; i++)
  {
    for (int j = x; j <= vp[i].first; j++)
      cout << "R";
    for (int j = y; j <= vp[i].second; j++)
      cout << "U";
    x = vp[i].first + 1;
    y = vp[i].second + 1;
  }
  cout << "\n";
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