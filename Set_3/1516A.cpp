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
  ll A[N + 1], pre[N + 2], pos[N + 2];
  pre[0] = 0;
  pos[N + 1] = 0;
  FOR(i, 1, N)
  cin >> A[i];
  for (int i = 1; i <= N; i++)
  {
    pre[i] = A[i] ^ pre[i - 1];
  }
  // for (int i = N; i >= 1; i--)
  // {
  //   pos[i] = A[i] ^ pos[i + 1];
  // }
  // for (int i = 1; i <= N; i++)
  // {
  //   cout << pos[i] << " ";
  // }
  string ans = "NO";
  for (int i = 1; i <= N; i++)
  {
    if (pre[i] == pos[i + 1])
    {
      ans = "YES";
      break;
    }
  }
  cout << ans << "\n";
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