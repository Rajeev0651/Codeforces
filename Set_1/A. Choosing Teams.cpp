#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, K,count=0;
  cin >> N >> K;
  int A[N];
  for (int i = 0; i < N; i++)
    cin >> A[i];
  sort(A, A + N);
  for (int i = 0; i < N; i++)
  {
    A[i] += K;
  }
  for (int i = 0; i < N-2; i += 3)
  {
    if (A[i] <= 5 && A[i + 1] <= 5 && A[i + 2] <=5)
      count++;
    else
      break;
  }
  cout<<count;
  return 0;
}