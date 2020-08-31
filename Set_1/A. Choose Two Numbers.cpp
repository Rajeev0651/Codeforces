#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, M, x;
  cin >> N;
  vector<int> A, B;
  for (int i = 0; i < N; i++)
  {
    cin >> x;
    A.push_back(x);
  }
  cin >> M;
  for (int i = 0; i < M; i++)
  {
    cin >> x;
    B.push_back(x);
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  int p, q;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      if (binary_search(A.begin(), A.end(), A[i] + B[j]))
        continue;
      if (binary_search(B.begin(), B.end(), A[i] + B[j]))
        continue;
      else
      {
        p = A[i];
        q = B[j];
      }
    }
  }
  cout << p << " "<<q;
  return 0;
}