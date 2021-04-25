//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

bool isvalid(int x, int y, int N)
{
  if (x >= 0 && x < N && y >= 0 && y < N)
    return true;
  if (x == 1 && y == 2)
    cout << x << " " << y << "\n";
  return false;
}
void compute(char A[][100], int x, int y, int N, int pos)
{
  int next_x, next_y;
  if (pos == N * N)
    return;
  int Y[8] = {2, 2, -2, -2, 1, 1, -1, -1};
  int X[8] = {1, -1, 1, -1, 2, -2, 2, -2};
  for (int i = 0; i < 8; i++)
  {
    next_x = x + X[i];
    next_y = y + Y[i];
    if (isvalid(next_x, next_y, N))
    {

      if (A[x][y] == 'W')
      {

        if (A[next_x][next_y] != 'B' && A[next_x][next_y] != 'W')
        {
          A[next_x][next_y] = 'B';
          compute(A, next_x, next_y, N, pos + 1);
        }
      }
      else if (A[x][y] == 'B')
      {
        if (A[next_x][next_y] != 'W' && A[next_x][next_y] != 'B')
        {
          A[next_x][next_y] = 'W';
          compute(A, next_x, next_y, N, pos + 1);
        }
      }
    }
  }
}
void solve()
{
  int N;
  cin >> N;
  char A[N][100];
  FOR(i, 0, N - 1)
  {
    FOR(j, 0, N - 1)
    {
      A[i][j] = '0';
    }
  }
  A[0][0] = 'W';
  compute(A, 0, 0, N, 0);
  FOR(i, 0, N - 1)
  {
    FOR(j, 0, N - 1)
    {
      if (A[i][j] == '0')
        cout << 'W';
      else
        cout << A[i][j];
    }
    cout << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}