#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, zeros = 0, ones = 0, flag = 0;
    char k;
    cin >> N;
    int ans[N];
    string res = "YES";
    char A[N], B[N];
    for (int i = 0; i < N; i++)
      cin >> A[i];
    for (int i = 0; i < N; i++)
      cin >> B[i];
    for (int i = 0; i < N; i++)
    {
      if (A[i] == '0')
        zeros++;
      else
      {
        ones++;
      }
      if (zeros == ones)
        ans[i] = 1;
      else
      {
        ans[i] = 0;
      }
    }
    for (long int i = N - 1; i >= 0; i--)
    {
      k = flag ? (A[i] == '1' ? '0' :'1') : (A[i]);
      if (k != B[i])
      {
        flag = (flag + 1) % 2;
        if (i != 0)
        {
          if (ans[i] != 1)
          {
            //cout << i << "\t" << k << "\t";
            res = "NO";
            break;
          }
        }
        else if (i == 0)
        {
          res = "NO";
          break;
        }
      }
    }
    cout << res << "\n";
  }
  return 0;
}