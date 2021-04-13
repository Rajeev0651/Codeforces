#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int a, b, N, ans = 0;
    cin >> a >> b;
    N = a + b;
    char A[N];
    for (int i = 0; i < N; i++)
    {
      cin >> A[i];
      if (A[i] == '0')
        a--;
      else if (A[i] == '1')
        b--;
    }
    for (int i = 0; i < N / 2; i++)
    {
      if (A[i] != A[N - i - 1])
      {
        if (A[i] == '?')
        {
          A[i] = A[N - i - 1];
          if (A[N - i - 1] == '0' && a > 0)
            a--;
          else if (b > 0)
            b--;
        }
        else if (A[N - i - 1] == '?')
        {
          A[N - i - 1] = A[i];
          if (A[i] == '0' && a > 0)
            a--;
          else if (b > 0)
            b--;
        }
        else
        {
          ans = -1;
          break;
        }
      }
    }
    for (int i = 0; i < N / 2; i++)
    {
      if (a > 1 && A[i] == '?')
      {
        A[i] = '0';
        A[N - i - 1] = '0';
        a -= 2;
      }
      else if (b > 1 && A[i] == '?')
      {
        A[i] = '1';
        A[N - i - 1] = '1';
        b -= 2;
      }
    }
    if (N % 2 == 1)
    {
      if (A[N / 2] == '?')
      {
        if (a > 0)
        {
          A[N / 2] = '0';
          a--;
        }
        else if (b > 0)
        {
          A[N / 2] = '1';
          b--;
        }
        else
          ans = -1;
      }
    }
    if (a == 0 && b == 0 && (ans != -1))
      for (int i = 0; i < N; i++)
      {
        cout << A[i];
      }
    else
      cout << "-1";
    cout << "\n";
  }
  return 0;
}