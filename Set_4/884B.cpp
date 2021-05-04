//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll n, x;
  cin >> n >> x;
  ll A[n];
  FOR(i, 0, n - 1)
  cin >> A[i];
  ll val = 0;
  FOR(i, 0, n - 1)
  {
    val += A[i];
  }
  val += n - 1;
  if (val != x)
    cout << "NO\n";
  else
    cout << "YES\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}