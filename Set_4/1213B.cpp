//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, val, count = 0;
  cin >> N;
  int A[N], diff[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  diff[N - 1] = A[N - 1];
  FOREV(i, N - 2, 0)
  {
    diff[i] = min(A[i], diff[i + 1]);
  }
  FOR(i, 0, N - 1)
  if (A[i] > diff[i])
    count++;
  cout << count << "\n";
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