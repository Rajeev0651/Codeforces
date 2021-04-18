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
    N = N * 2;
    int A[N];
    for (int i = 0; i < N; i++)
    {
      cin >> A[i];
    }
    sort(A, A + N);
    int mid = A[N / 2] - A[(N / 2) - 1];
    cout << mid << "\n";
  }
  return 0;
}