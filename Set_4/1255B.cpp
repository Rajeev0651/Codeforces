//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int n, m;
  cin >> n >> m;
  int A[n];
  FOR(i, 0, n - 1)
  cin >> A[i];
  if (m < n && n != 2)
  {
    cout << -1 << "\n";
    return;
  }
  int sum = 0;
  if (m < n && n != 1)
  {
    cout << -1 << "\n";
    return;
  }
  sort(A, A + n);
  for (int i = 0, j = m; i < n, m >= 1; i++, m--)
  {
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