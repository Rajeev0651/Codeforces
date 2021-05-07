//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, X, odd = 0, even = 0;
  cin >> N >> X;
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  FOR(i, 0, N - 1)
  {
    if (A[i] % 2 == 0)
      even++;
    else
      odd++;
  }
  if (odd == 0)
  {
    cout << "NO\n";
    return;
  }
  if (X % 2 == 1)
  {
    if (odd >= X)
    {
      cout << "YES\n";
      return;
    }
    else
    {
      if (odd % 2 == 0)
        odd--;
      if (odd + even >= X)
      {
        cout << "YES\n";
        return;
      }
    }
  }
  else
  {
    if (odd <= X)
    {
      if (odd % 2 == 0)
        odd--;
      if (odd + even >= X)
      {
        cout << "YES\n";
        return;
      }
    }
    else
    {
      if (even >= 1)
      {
        cout << "YES\n";
        return;
      }
    }
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