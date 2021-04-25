//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, one = 0, two = 0, ans = 0;
  cin >> N;
  ll A[N];
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    if (A[i] % 3 == 1)
      one++;
    else if (A[i] % 3 == 2)
      two++;
    else
      ans++;
  }
  ans += min(one, two);
  if (one == two)
  {
    cout << ans << "\n";
  }
  else
  {
    if (one > two)
    {
      int left = one - two;
      ans += (left / 3);
    }
    else
    {
      int left = two - one;
      ans += (left / 3);
    }
    cout << ans << "\n";
  }
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