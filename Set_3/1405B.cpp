#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    long long int N, maxval;
    cin >> N;
    long long int A[N], pre[N];
    memset(pre, 0, sizeof(pre));
    for (int i = 0; i < N; i++)
      cin >> A[i];
    pre[N - 1] = A[N - 1];
    maxval = pre[N - 1];
    for (int i = N - 2; i >= 0; i--)
    {
      pre[i] = A[i] + pre[i + 1];
      maxval = max(maxval, pre[i]);
    }
    cout << maxval << "\n";
  }
  return 0;
}