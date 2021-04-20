//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i < b; i++)

void solve()
{
  ll p, q, e1 = 0, e2 = 0, o1 = 0, o2 = 0;
  cin >> p;
  int A[p];
  FOR(i, 0, p)
  {
    cin >> A[i];
    if (A[i] % 2 == 0)
      e1++;
    else
      o1++;
  }
  cin >> q;
  int B[p];
  FOR(i, 0, q)
  {
    cin >> B[i];
    if (B[i] % 2 == 0)
      e2++;
    else
      o2++;
  }
  ll ans = e1 * e2 + o1 * o2;
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