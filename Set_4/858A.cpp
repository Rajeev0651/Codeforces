//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll A, k;
  cin >> A >> k;
  ll x = (A & (~(A - 1)));
  ll val1 = 0;
  if (x != 0)
    val1 = (log2(x));
  int val2 = 0;
  for (ll i = 5;; i *= 5)
  {
    if (i > A)
      break;
    if (A % i == 0)
      val2 = i;
  }
  if (val2 != 0)
    val2 = log(val2) / log(5);
  while (val1 < k)
  {
    A *= 2;
    val1++;
  }
  while (val2 < k)
  {
    A *= 5;
    val2++;
  }
  cout << A << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}