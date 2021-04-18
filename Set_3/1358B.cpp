#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
      cin >> A[i];
    sort(A, A + N);
    int count = N, ans = 1;
    for (int i = N - 1; i >= 0; i--)
    {
      if (A[i] <= count)
      {
        ans = count + 1;
        break;
      }
      count--;
    }
    cout << ans << "\n";
  }
  return 0;
}