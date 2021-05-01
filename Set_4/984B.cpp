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
  char A[N][M];
  FOR(i, 0, N - 1)
  FOR(j, 0, M - 1)
  cin >> A[i][j];
  FOR(i, 0, N - 1)
  FOR(j, 0, M - 1)
  {
    ivalid(x, y, N, M);
  }
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