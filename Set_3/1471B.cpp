//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, q, sum = 0, ans = 0;
  cin >> N >> q;
  ll A[N];
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
  }
  int flag = 1, cycle = 1;
  int curr = INT_MAX, prev = INT_MAX;
  while (flag)
  {
    curr = INT_MAX;
    for (int i = 0; i < N; i++)
    {
      if (A[i] % q != 0)
      {
        curr = min(curr, i);
        if (i == prev)
        {
          flag = 0;
          break;
        }
      }
      sum += A[i];
      if (A[i] % q == 0)
        A[i] /= q;
    }
    prev = min(prev, curr);
    ans += (sum * cycle);
    sum = 0;
    cycle = cycle * q;
    if (flag == 0)
      break;
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