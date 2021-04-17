#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int N, index = 0, sum = 0;
  cin >> N;
  int A[N], B[N];
  for (int i = 0; i < N; i++)
    cin >> A[i];
  sort(A, A + N);
  for (int i = 1; i < N; i += 2)
    B[i] = A[index++];
  for (int i = 0; i < N; i += 2)
  {
    B[i] = A[index++];
  }
  for (int i = 1; i < N - 1; i += 2)
    sum++;
  cout << sum << "\n";
  for (int i = 0; i < N; i++)
    cout << B[i] << " ";
  cout << "\n";
  return 0;
}