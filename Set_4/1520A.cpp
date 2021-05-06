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
  string S;
  cin >> S;
  int flag[30];
  memset(flag, 0, sizeof(flag));
  string ans = "YES";
  flag[S[0] - 'A'] = 1;
  for (int i = 1; i < N; i++)
  {
    int x = S[i] - 'A';
    if (flag[x] == 1 && (S[i] != S[i - 1]))
    {
      ans = "NO";
      break;
    }
    flag[x] = 1;
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