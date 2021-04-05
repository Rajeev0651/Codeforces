#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, Q, x, y, one = 0, zero = 0, ans;
  cin >> N >> Q;
  int A[N];
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    if (A[i] == 1)
      one++;
    else
      zero++;
  }
  while (Q--)
  {
    cin >> x >> y;
    if (x == 2)
    {
      if (y <= one)
        ans = 1;
      else
      {
        ans = 0;
      }
      cout << ans << "\n";
    }
    else
    {
      if (A[y - 1] == 0)
      {
        zero--;
        one++;
        A[y - 1] = 1;
      }
      else
      {
        zero++;
        one--;
        A[y - 1] = 0;
      }
    }
  }
  return 0;
}