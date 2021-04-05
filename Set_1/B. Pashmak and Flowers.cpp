#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int N, diff, x;
  cin >> N;
  vector<int> A;
  for (int i = 0; i < N; i++)
  {
    cin >> x;
    A.push_back(x);
  }
  sort(A.begin(), A.end());
  diff = A[N - 1] - A[0];
  long long int a = A[0], b = A[N - 1], n = 0, p = 0;
  if (a == b)
  {
    cout << diff << " " << (N * (N - 1)) / 2 << "\n";
    return 0;
  }
  for (int i = 0; i <= N - 1; i++)
  {
    if (A[i] == a)
    {
      n++;
    }
  }
  for (int i = N - 1; i >= 0; i--)
  {
    if (A[i] == b)
    {
      p++;
    }
  }
  cout << diff << " " << n * p;
  return 0;
}