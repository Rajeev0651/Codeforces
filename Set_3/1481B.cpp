//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, k, ans = -1;
  cin >> N >> k;
  ll A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  ll left = 0;
  while (1)
  {
    if (left == N - 1 && k != 0)
    {
      ans = -2;
      break;
    }
    if (A[left] < A[left + 1])
    {
      A[left]++;
      k--;
      if (k == 0)
      {
        ans = left;
        break;
      }
      left = 0;
    }
    else if (A[left] >= A[left + 1])
    {
      left++;
    }
  }
  // FOR(i, 0, N - 1)
  // cout << A[i] << " ";
  // cout << "\n";
  cout << ans + 1 << "\n";
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