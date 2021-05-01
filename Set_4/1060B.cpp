//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, a, b, sum = 0;
  cin >> N;
  if (N <= 9)
  {
    cout << N << "\n";
    return;
  }
  a = N / 2;
  if (N % 2 == 0)
    b = a;
  else
    b = a + 1;
  while ((a % 10 != 9) && (b % 10 != 9))
  {
    a--;
    b++;
  }
  while ((a > 0) || (b > 0))
  {
    sum += a % 10;
    a /= 10;
    sum += b % 10;
    b /= 10;
  }
  cout << sum << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}