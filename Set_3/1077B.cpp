//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, k = 0;
  cin >> N;
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  FOR(i, 1, N - 2)
  {
    if (A[i] == 0 && A[i - 1] == 1 && A[i + 1] == 1)
    {
      A[i + 1] = 0;
      k++;
    }
  }
  cout << k << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}