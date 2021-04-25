//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int boy, girl, N, a, b, ans = 0;
  cin >> boy >> girl >> N;
  for (int i = 0; i <= N; i++)
  {
    a = i;
    b = N - a;
    if (a <= boy && b <= girl)
      ans++;
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}