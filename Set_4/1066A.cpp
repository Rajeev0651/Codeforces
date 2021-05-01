//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

int counter(int a, int b, int c)
{
  int A = a / c;
  int B = b / c;
  if (a % c == 0)
    return B - A + 1;
  else
    return B - A;
}
void solve()
{
  int L, v, left, right;
  cin >> L >> v >> left >> right;
  cout << counter(1, L, v) - counter(left, right, v) << "\n";
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