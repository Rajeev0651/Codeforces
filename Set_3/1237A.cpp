//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, odd = 0;
  cin >> N;
  int A[N];
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    if (abs(A[i]) % 2 == 1)
      odd++;
  }
  odd /= 2;
  FOR(i, 0, N - 1)
  {
    double k = A[i];
    if (A[i] % 2 == 0)
      cout << k / 2 << "\n";
    else if (odd >= 1)
    {
      k = ceil(k / 2);
      if (k == -0)
        k = 0;
      cout << k << "\n";
      odd--;
    }
    else
      cout << floor(k / 2) << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}