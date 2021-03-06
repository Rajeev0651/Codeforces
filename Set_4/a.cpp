//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N;
  cin >> N;
  int A[N], B[N], val;
  B[N - 1] = 0;
  FOR(i, 0, N - 1)
  cin >> A[i];
  for (int i = N - 2; i >= 0; i--)
  {
    val = INT_MAX;
    for (int j = i + 1, k = 1; j < N, k <= A[i]; j++, k++)
    {
      val = min(val, B[j]);
    }
    B[i] = val + 1;
  }
  cout << B[0] << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}