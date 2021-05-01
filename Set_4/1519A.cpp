//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll red, blue, dis;
  cin >> red >> blue >> dis;
  ll val;
  if (red > blue)
    swap(red, blue);
  val = dis + 1;
  val = val * red;
  if (blue > val)
    cout << "NO\n";
  else
    cout << "YES\n";
}

int main()
{
  //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}