#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n, k, count = 1;
    cin >> n >> k;
    int A[n];
    memset(A, 0, sizeof(A));
    int l = k;
    for (int i = 0; i < n; i++)
    {
      A[i] = count++;
      if (k > 0)
      {
        k--;
        i++;
      }
    }
    for (int i = 0; i < n; i++)
    {
      if (A[i] == 0)
        A[i] = count++;
    }
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
      if (A[i] > A[i - 1] && A[i] > A[i + 1])
        ans++;
    }
    if (ans == l)
    {
      for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    }
    else
      cout << "-1";
    cout << "\n";
  }
  return 0;
}