#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, jmp;
    cin >> N;
    int A[N];
    int leftOdd[N], leftEven[N], rightOdd[N], rightEven[N];
    for (int i = 0; i < N; i++)
    {
      cin >> A[i];
    }
    int odd = 0, even = 0;
    for (int i = 0; i < N; i++)
    {
      leftOdd[i] = odd;
      leftEven[i] = even;
      if (i % 2 == 0)
        even += A[i];
      else
        odd += A[i];
    }
    odd = 0;
    even = 0;
    for (int i = N - 1; i >= 0; i--)
    {
      rightOdd[i] = odd;
      rightEven[i] = even;
      if (i % 2 == 0)
        even += A[i];
      else
        odd += A[i];
    }
    int count = 0;
    for (int i = 0; i < N; i++)
    {
      if (leftOdd[i] + rightEven[i] == leftEven[i] + rightOdd[i])
      {
        cout << i+1 << "\n";
        count++;
      }
    }
  }
  return 0;
}