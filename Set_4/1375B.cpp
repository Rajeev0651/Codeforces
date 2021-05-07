//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

bool isvalid(int i, int j, int N)
{
  if (i >= 0 && i < N && j >= 0 && j < N)
    return true;
  return false;
}
void solve()
{
  int N, M;
  cin >> N >> M;
  int A[N][M];
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
      cin >> A[i][j];
  }
  int a = 0, b = 0, c = 0, d = 0, e = 0;
  string ans = "YES";
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      if (isvalid(i, j + 1, N))
      {
        b = 1;
        if (A[i][j + 1] >= 1)
        {
          a++;
          b = 2;
        }
      }
      if (isvalid(i, j - 1, N))
      {
        c = 1;
        if (A[i][j + 1] >= 1)
        {
          a++;
          c = 2;
        }
      }
      if (isvalid(i + 1, j, N))
      {
        d = 1;
        if (A[i][j + 1] >= 1)
        {
          d = 2;
          a++;
        }
      }
      if (isvalid(i - 1, j, N))
      {
        e = 0;
        if (A[i][j + 1] >= 1)
        {
          e = 0;
          a++;
        }
      }
      if (a > A[i][j])
      {
        A[i][j] = a;
      }
      else
      {
        int left = A[i][j] - a;
        int x = 0, y = 1;
        for (int k = 1; k <= left; k++)
        {
          if (b == 1)
          {
            int x = 0;
            if (isvalid(i, j + 2, N))
            {
              x++;
            }
            if (isvalid(i, j, N))
            {
              x++;
            }
            if (isvalid(i + 1, j + 1, N))
            {
              x++;
            }
            if (isvalid(i - 1, j + 1, N))
            {
              x++;
            }
            A[i][j + 1] = x;
          }
        }
      }
    }
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