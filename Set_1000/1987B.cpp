// Jai Shree Ram
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
  ll A[N], B[N];
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    B[i] = A[i];
  }

  ll max_val = A[0];
  for (int i = 0; i < N; i++)
  {
    if (A[i] < max_val)
    {
      A[i] = max_val;
    }
    else
    {
      max_val = A[i];
    }
  }
  ll res = 0, mx = -1;
  for (int i = 0; i < N; i++)
  {
    res += (A[i] - B[i]);
    if (A[i] - B[i] >= mx)
      mx = A[i] - B[i];
  }
  cout << res + mx << "\n";
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