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
  int val = N * N;
  int A[N][N];
  int c = 1;
  int r, w;
  if (N == 2)
  {
    cout << "-1\n";
    return;
  }
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      A[i][j] = c;
      r = i, w = j;
      c += 2;
      if (c > val)
        break;
    }
    if (c > val)
      break;
  }
  c = 2;
  for (int i = r; i < N; i++)
  {
    for (int j = w + 1; j < N; j++)
    {
      A[i][j] = c;
      c += 2;
    }
    w = -1;
  }
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cout << A[i][j] << " ";
    }
    cout << "\n";
  }
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