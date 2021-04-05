#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    long int N, a, b, c, d, e, f, ans = 0;
    cin >> N;
    long int A[N];
    for (int i = 0; i < N; i++)
      cin >> A[i];
    if (A[N - 1] >= (A[0] + A[1]))
    {
      cout << "1 2 " << N << "\n";
    }
    else
    {
      cout << "-1\n";
    }
  }
  return 0;
}