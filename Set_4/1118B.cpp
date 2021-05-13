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
  int A[N];
  int even[N + 1], odd[N + 1], e = 0, o = 0;
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    if (i % 2 == 0)
      e += A[i];
    else
      o += A[i];
    even[i] = e;
    odd[i] = o;
  }
  int oddr[N], evenr[N];
  e = o = 0;
  for (int i = N - 1; i >= 0; i--)
  {
    if (i % 2 == 0)
      e += A[i];
    else
      o += A[i];
    evenr[i] = e;
    oddr[i] = o;
  }
  int ans = 0, x, y, p, q, r, s;
  for (int i = 0; i < N; i++)
  {
    if (i - 1 < 0)
    {
      p = 0;
      r = 0;
    }
    else
    {
      p = even[i - 1];
      r = odd[i - 1];
    }
    if (i + 1 >= N)
    {
      q = 0;
      s = 0;
    }
    else
    {
      q = oddr[i + 1];
      s = evenr[i + 1];
    }
    x = p + q;
    y = r + s;
    if (x == y)
    {
      ans++;
    }
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}