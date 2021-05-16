//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, x, y;
  cin >> N >> x >> y;
  int A[N], count = 0;
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    if (A[i] <= x)
      count++;
  }
  if (x > y)
    cout << N << "\n";
  else
  {
    int ans = count / 2;
    if (count % 2 == 1)
      ans++;
    cout << ans << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}