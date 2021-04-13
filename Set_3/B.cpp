#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N;
    int X1 = -1, Y1, X2, Y2;
    cin >> N;
    char A[N][N];
    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
      {
        cin >> A[i][j];
        if (A[i][j] == '*')
        {
          if (X1 == -1)
          {
            X1 = j;
            Y1 = i;
          }
          else
          {
            X2 = j;
            Y2 = i;
          }
        }
      }
    }
    int x1, y1, x2, y2;
    if (X1 == X2)
    {
      y1 = Y1;
      y2 = Y2;
      if (X1 + 1 < N)
      {
        x1 = X1 + 1;
        x2 = x1;
      }
      else
      {
        x1 = X1 - 1;
        x2 = x1;
      }
    }
    else if (Y1 == Y2)
    {
      x1 = X1;
      x2 = X2;
      if (Y1 + 1 < N)
      {
        y1 = Y1 + 1;
        y2 = y1;
      }
      else
      {
        y1 = Y1 - 1;
        y2 = y1;
      }
    }
    else
    {
      x1 = X1;
      y1 = Y2;
      x2 = X2;
      y2 = Y1;
    }
    //cout << x1 << " " << y1 << " " << x2 << " " << y2 << "\n";
    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
      {
        if ((i == y1 && j == x1) || (i == y2 && j == x2))
          cout << "*";
        else
          cout << A[i][j];
      }
      cout << "\n";
    }
  }
  return 0;
}