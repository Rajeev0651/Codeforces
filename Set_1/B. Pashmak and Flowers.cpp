#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, diff, x;
  cin >> N;
  vector<int> A;
  for (int i = 0; i < N; i++)
  {
    cin >> x;
    A.push_back(x);
  }
  sort(A.begin(), A.end());
  diff = A[N - 1] - A[0];
  int a = A[0], b = A[N - 1], n = 0, p = 0;
  for (int i = 0; i < N; i++)
  {
    if (A[i] == a)
      n++;
    else
      break;
  }
for (int i = N-1; i>=0; i--)
  {
    if (A[i] == b)
      p++;
    else
      break;
  }
  cout << diff << " " << n*p;
  return 0;
}