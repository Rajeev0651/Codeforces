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
  if (N == 1)
  {
    cout << 1 << "\n";
    cout << 1 << " " << 1 << "\n";
  }
  else if (N == 2)
  {
    cout << 2 << "\n";
    cout << 1 << " " << 1 << "\n";
    cout << 1 << " " << 2 << "\n";
  }
  else
  {
    int m = N - 1;
    cout << m << "\n";
    if (N % 2 == 0)
    {
      for (int i = 1, j = 1, k = 1; k <= N; j += 2, k++)
      {
        if (j > m)
        {
          i = m;
          j = 1;
        }
        cout << i << " " << j << "\n";
      }
    }
    else
    {
      for (int i = 1, j = 1, k = 1; k < N; j += 2, k++)
      {
        if (j > m)
        {
          i = m - 1;
          j = 1;
        }
        cout << i << " " << j << "\n";
      }
      cout << m << " " << m << "\n";
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}