//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, count = 0, x = 1, p = 0;
  cin >> N;
  while (1)
  {
    p = (x * x) + (2 * p);
    x *= 2;
    if (p <= N)
    {
      count++;
      N -= p;
    }

    else if (p > N)
      break;
    //cout << p << "\n";
  }
  cout << count << "\n";
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