//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, Q, K;
  cin >> N >> Q >> K;
  ll A[N + 2];
  FOR(i, 1, N)
  cin >> A[i];
  ll ans[N + 2];
  for (ll i = 1; i <= N; i++)
  {
    ll k = A[i];
    if (i == 1)
    {
      ans[i] = A[i + 1] - 2;
    }
    else if (i == N)
    {
      ans[i] = K - A[i - 1] - 1;
    }
    else
    {
      ll left = A[i - 1];
      ll right = A[i + 1];
      ans[i] = right - left - 2;
    }
  }
  ll presum[N + 2];
  presum[1] = ans[1];
  for (int i = 2; i <= N; i++)
  {
    presum[i] = ans[i] + presum[i - 1];
  }
  // for (int i = 1; i <= N; i++)
  // {
  //   cout << ans[i] << " ";
  // }
  // cout << "\n";
  // for (int i = 1; i <= N; i++)
  // {
  //   cout << presum[i] << " ";
  // }
  while (Q--)
  {
    ll a, b, ans = 0;
    cin >> a >> b;
    if (a == b)
    {
      cout << K - 1 << "\n";
      continue;
    }
    ll x1 = A[a + 1] - 2;
    ll x2 = K - A[b - 1] - 1;
    ll left = a + 1, right = b - 1;
    ll res = x1 + x2;
    if (left <= right)
    {
      res += (presum[right] - presum[left - 1]);
    }
    cout << res << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}