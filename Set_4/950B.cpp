//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, M;
  cin >> N >> M;
  ll A[N], B[M];
  FOR(i, 0, N - 1)
  cin >> A[i];
  FOR(i, 0, M - 1)
  cin >> B[i];
  ll a = 0, b = 0, ans = 0, x = 0, y = 0;
  x = A[0], y = B[0];
  while (a < N && b < M)
  {
    if (x == y)
    {
      ans++;
      x = A[++a];
      y = B[++b];
    }
    else if (x < y)
      x += A[++a];
    else
      y += B[++b];
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}