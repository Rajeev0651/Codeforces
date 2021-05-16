//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define pi 3.141592653589793238
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  double n, r;
  cin >> n >> r;
  double x = 2 * pi * r;
  double ans = x / ((double)2 * (n - pi));
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}