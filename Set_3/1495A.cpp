#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, x, y, count1 = 0, count2 = 0;
    cin >> N;
    int A[2 * N], M[N], D[N];
    for (int i = 0; i < 2 * N; i++)
    {
      cin >> x >> y;
      if (x == 0)
      {
        M[count1++] = abs(y);
      }
      else if (y == 0)
      {
        D[count2++] = abs(x);
      }
    }
    double val, ans = 0;
    sort(M, M + N);
    sort(D, D + N);
    for (int i = 0; i < N; i++)
    {
      val = sqrt(pow(M[i], 2) + pow(D[i], 2));
      ans += val;
    }
    cout << setprecision(10) << ans << "\n";
  }
  return 0;
}