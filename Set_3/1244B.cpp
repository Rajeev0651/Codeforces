//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, left = -1, right = -1;
  string S;
  cin >> N;
  cin >> S;
  FOR(i, 0, N - 1)
  {
    if (S[i] == '1')
    {
      left = i;
      break;
    }
  }
  FOREV(i, N - 1, 0)
  {
    if (S[i] == '1')
    {
      right = i;
      break;
    }
  }
  int ans;
  if (left != -1 && right != -1)
  {
    int val = min(N - right, left + 1);
    ans = (2 * N) - (2 * (val - 1));
  }
  else if (right != -1)
  {
    ans = 2 * (N - (right + 1));
  }
  else if (left != -1)
  {
    ans = 2 * (N - (left + 1));
  }
  else
    ans = N;
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