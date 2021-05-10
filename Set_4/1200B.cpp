//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll n, m, k;
  cin >> n >> m >> k;
  ll A[n];
  string ans = "YES";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  for (int i = 0; i < n - 1; i++)
  {
    ll diff = abs(A[i] - A[i + 1]);
    ll mina = max((ll)0, A[i + 1] - k);
    if (A[i] >= mina)
    {
      ll d = A[i] - mina;
      m += d;
    }
    else if (A[i] < mina)
    {
      ll d = mina - A[i];
      if (d > m)
      {
        cout << "NO\n";
        return;
      }
      else
      {
        m -= (mina - A[i]);
      }
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