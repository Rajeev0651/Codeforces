//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, dis;
  string ans = "YES";
  cin >> N >> dis;
  int A[N][2], B[dis + 1];
  memset(B, 0, sizeof(B));
  FOR(i, 0, N - 1)
  {
    cin >> A[i][0] >> A[i][1];
  }
  for (int i = 0; i < N; i++)
  {
    for (int j = A[i][0]; j < A[i][1]; j++)
    {
      B[j] = 1;
    }
  }
  for (int i = 0; i < dis; i++)
  {
    if (B[i] != 1)
    {
      ans = "NO";
      break;
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