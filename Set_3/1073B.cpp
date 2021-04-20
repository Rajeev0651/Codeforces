//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, right = 0;
  cin >> N;
  int A[N + 2], B[N + 2], C[N + 2], ans[N + 2];
  FOR(i, 1, N)
  {
    cin >> A[i];
    C[A[i]] = i;
  }
  FOR(i, 1, N)
  {
    cin >> B[i];
  }
  FOR(i, 1, N)
  {
    if (C[B[i]] > right)
    {
      ans[i] = C[B[i]] - right;
      right = C[B[i]];
    }
    else
      ans[i] = 0;
  }
  FOR(i, 1, N)
  {
    cout << ans[i] << " ";
  }
  cout << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}