//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

bool check(long double x)
{
  if (x >= 0)
  {
    long long a = sqrt(x);
    return (a * a == x);
  }
  return false;
}

void solve()
{
  int N;
  int flag = 0;
  cin >> N;
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  FOR(i, 0, N - 1)
  {
    if (A[i] != 1)
      if (check(A[i]) == false)
      {
        flag = 1;
        break;
      }
  }
  if (flag == 1)
    cout << "YES\n";
  else
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