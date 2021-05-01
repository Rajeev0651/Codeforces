//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll A[14], ans = 0, sum = 0;
  for (int i = 0; i < 14; i++)
    cin >> A[i];
  for (int i = 0; i < 14; i++)
  {
    ll B[14];
    sum = 0;
    ll val = A[i] / 14;
    for (int j = 0; j < 14; j++)
    {
      if (i == j)
        B[j] = val;
      else
        B[j] = A[j] + val;
    }
    ll k = A[i] % 14;
    for (int j = i + 1, p = k; p >= 1; j++, p--)
    {
      if (j == 14)
      {
        j = 0;
        B[j]++;
      }
      else
        B[j]++;
    }
    for (int j = 0; j < 14; j++)
    {
      if (B[j] % 2 == 0)
        sum += B[j];
    }
    ans = max(ans, sum);
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}