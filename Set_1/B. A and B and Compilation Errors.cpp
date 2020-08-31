#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, ans1, ans2;
  cin >> N;
  int A[N], B[N - 1], C[N - 2];
  for (int i = 0; i < N; i++)
    cin >> A[i];
  for (int i = 0; i < N - 1; i++)
    cin >> B[i];
  for (int i = 0; i < N - 2; i++)
    cin >> C[i];
  sort(A, A + N);
  sort(B, B + N - 1);
  sort(C, C + N - 2);
  for (int i = 0; i < N; i++)
  {
    if (A[i] != B[i])
    {
      ans1 = A[i];
      break;
    }
  }
  for (int i = 0; i < N - 1; i++)
  {
    if (B[i] != C[i])
    {
      ans2 = B[i];
      break;
    }
  }
  cout << ans1 << "\n" << ans2;
  return 0;
}