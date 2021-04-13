#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, X[101];
    memset(X, 0, sizeof(X));
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
      cin >> A[i];
      X[A[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
      int p = A[i];
      if (X[p] == 1)
      {
        ans = i + 1;
        break;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}