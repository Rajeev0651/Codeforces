//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll n, k;
  cin >> n >> k;
  if (n == k)
  {
    cout << "YES\n";
    for (ll i = 1; i <= k; i++)
      cout << "1 ";
    cout << "\n";
    return;
  }
  if (n % 2 == 0)
  {
    if (k <= n / 2)
    {
      cout << "YES\n";
      for (ll i = 1; i <= k; i++)
      {
        if (i != k)
          cout << "2 ";
        else
          cout << n - ((ll)2 * (i - 1)) << " ";
      }
      cout << "\n";
      return;
    }
    else if (k % 2 == 0 && k <= n)
    {
      cout << "YES\n";
      for (ll i = 1; i <= k; i++)
      {
        if (i != k)
          cout << "1 ";
        else
          cout << n - (i - 1) << " ";
      }
      cout << "\n";
      return;
    }
  }
  else if (n % 2 == 1 && k <= n && k % 2 == 1)
  {
    cout << "YES\n";
    for (ll i = 1; i <= k; i++)
    {
      if (i != k)
        cout << "1 ";
      else
        cout << n - (i - 1) << " ";
    }
    cout << "\n";
    return;
  }
  cout << "NO\n";
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