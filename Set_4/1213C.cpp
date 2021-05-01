//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

ll counter(ll a, ll b, ll c)
{
  ll A = a / c;
  ll B = b / c;
  if (a % c == 0)
    return B - A + 1;
  else
    return B - A;
}
void solve()
{
  ll a, b, sum = 0, count, rem;
  cin >> a >> b;
  for (int i = 1; i <= 10; i++)
  {
    sum += (b * i) % 10;
  }
  count = counter(1, a, b) / 10;
  sum = sum * count;
  rem = counter(1, a, b) % 10;
  for (int i = 1; i <= rem; i++)
  {
    sum += (b * i) % 10;
  }
  cout << sum << "\n";
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