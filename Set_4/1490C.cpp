//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll n, x, y;
  cin >> n >> x >> y;
  ll left = n - 2;
  if (left == 0)
  {
    cout << x << " " << y << "\n";
    return;
  }
  ll jump = 1;
  ll k = y - x;
  left++;
  for (int i = left; i >= 1; i--)
  {
    if ((k % i) == 0)
    {
      jump = k / i;
      break;
    }
  }
  vector<ll> ans;
  left = n;
  for (int i = x; i <= y; i += jump)
  {
    ans.push_back(i);
    left--;
  }
  for (int i = x - jump; i >= 1; i -= jump)
  {
    if (left == 0)
      break;
    ans.push_back(i);
    left--;
  }
  for (int i = y + jump;; i += jump)
  {
    if (left == 0)
      break;
    ans.push_back(i);
    left--;
  }
  sort(ans.begin(), ans.end());
  for (auto &i : ans)
    cout << i << " ";
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