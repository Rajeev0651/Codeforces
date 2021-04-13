#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, c, ans = 0;
  cin >> N;
  N *= 2;
  vector<int> A, B, C;
  for (int i = 0; i < N; i++)
  {
    cin >> c;
    A.push_back(c);
  }
  B.assign(A.begin(), A.end());
  C.assign(A.begin(), A.end());
  if (is_sorted(A.begin(), A.end()))
  {
    cout << ans;
  }
  else
  {
    int flag = 0, x = 1, y = 1;
    while (true)
    {
      if (x == 0 && y == 0)
      {
        ans = -1;
        break;
      }
      if (flag == 0)
      {
        if (x == 1)
          for (int i = 0; i < N - 1; i += 2)
          {
            swap(C[i], C[i + 1]);
          }
        if (y == 1)
          for (int i = 0; i < N / 2; i++)
          {
            swap(B[i], B[N / 2 + i]);
          }
        ans++;
      }
      else
      {
        if (y == 1)
          for (int i = 0; i < N - 1; i += 2)
          {
            swap(B[i], B[i + 1]);
          }
        if (x == 1)
          for (int i = 0; i < N / 2; i++)
          {
            swap(C[i], C[N / 2 + i]);
          }
        ans++;
      }
      if (is_sorted(C.begin(), C.end()) || is_sorted(B.begin(), B.end()))
      {
        break;
      }
      if (B == A)
        y = 0;
      if (C == A)
        x = 0;
      flag = (flag + 1) % 2;
    }
    cout << ans;
  }
  return 0;
}