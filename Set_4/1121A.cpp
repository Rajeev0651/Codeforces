//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int n, m, k;
  cin >> n >> m >> k;
  int A[n + 1], B[n + 1], C[k + 1], D[m + 1], val, E[n + 1];
  memset(D, 0, sizeof(D));
  FOR(i, 1, n)
  cin >> A[i];
  FOR(i, 1, n)
  cin >> B[i];
  FOR(i, 1, k)
  cin >> C[i];
  FOR(i, 1, n)
  {
    D[B[i]] = max(D[B[i]], A[i]);
  }
  FOR(i, 1, n)
  {
    E[i] = B[i];
  }
  int ans = 0, p;
  FOR(i, 1, k)
  {
    //cout << A[C[i]] << " " << D[E[C[i]]] << "\n";
    if (A[C[i]] < D[E[C[i]]])
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