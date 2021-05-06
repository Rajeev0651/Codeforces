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
  ll A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  sort(A, A + N);
  ll a, b, c, d, e;
  a = A[0] * A[1];
  b = A[2] * A[3];
  c = A[N - 1] * A[N - 2];
  d = A[N - 3] * A[N - 4];
  ll x, y, z;
  x = a * b * A[N - 1];
  y = c * d * A[N - 5];
  z = a * c * A[N - 3];
  cout << max(x, max(y, z)) << "\n";
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