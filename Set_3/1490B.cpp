#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int N, a = 0, b = 0, c = 0;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
      cin >> A[i];
      if (A[i] % 3 == 0)
        a++;
      else if (A[i] % 3 == 1)
        b++;
      else if (A[i] % 3 == 2)
        c++;
    }
    int X = N / 3, ans = 0;
    while (a > X || b > X || c > X)
    {
      if (a > X)
      {
        a--;
        b++;
        ans++;
        continue;
      }
      if (b > X)
      {
        b--;
        c++;
        ans++;
        continue;
      }
      if (c > X)
      {
        c--;
        a++;
        ans++;
        continue;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}