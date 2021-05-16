//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N;
  cin >> N;
  int a, b, amin = INT_MAX, amax = INT_MIN, bmin = INT_MAX, bmax = INT_MIN;
  for (int i = 1; i <= N; i++)
  {
    cin >> a >> b;
    amin = min(amin, a);
    bmin = min(bmin, b);
  }
  for (int i = 1; i <= N; i++)
  {
    cin >> a >> b;
    amax = max(amax, a);
    bmax = max(bmax, b);
  }
  cout << amin + amax << " " << bmin + bmax << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}