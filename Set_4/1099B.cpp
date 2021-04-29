//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, ans;
  cin >> N;
  float a, b;
  a = floor(sqrt(N));
  b = ceil(sqrt(N));
  ans = N - (a * a);
  a = 2 * a + ans;
  int o = b * b - N;
  if (o >= b)
    b = b + (b - 1);
  else
    b = b * 2;
  cout << min(a, b) << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}