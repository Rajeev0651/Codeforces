//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll a1, a2, k1, k2, s;
  cin >> a1 >> a2 >> k1 >> k2 >> s;
  ll minf = (a1 * (k1 - 1) + a2 * (k2 - 1));
  if (k1 > k2)
  {
    swap(k1, k2);
    swap(a1, a2);
  }
  ll maxf = a1 * k1;
  ll j = s;
  if (maxf < s)
  {
    s = s - maxf;
    ll d = s / k2;
    maxf = a1 + (min(a2, d));
  }
  else if (maxf > s)
  {
    maxf = j / a1;
  }
  else
  {
    maxf = a1;
  }
  minf = j - minf;
  if (minf < 0)
    minf = 0;
  cout << minf << " " << maxf << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}