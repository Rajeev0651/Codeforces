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
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  int x = -1, y = -1;
  for (int i = 0; i < N; i++)
  {
    if (A[i] > 500000)
    {
      y = A[i];
      break;
    }
  }
  if (y == -1)
  {
    cout << A[N - 1] - 1 << "\n";
    return;
  }
  else
  {
    for (int i = 0; i < N; i++)
    {
      if (A[i] <= 500000)
        x = A[i];
    }
    cout << max(x - 1, 1000000 - y);
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}