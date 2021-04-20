//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, k = -1;
  cin >> N;
  string S, ans = "YES";
  cin >> S;
  FOR(i, 0, N / 2)
  {
    k = abs(S[i] - S[N - i - 1]);
    if (k == 25)
      k = 1;
    if (k > 2 || k == 1)
      ans = "NO";
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