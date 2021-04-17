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
    string ans = "NO";
    for (int i = 0; i < N - 1; i++)
    {
      if (A[i] == A[i + 1])
      {
        ans = "YES";
        break;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}