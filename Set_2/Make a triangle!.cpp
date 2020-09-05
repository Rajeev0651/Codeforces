#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A[3], ans;
  cin >> A[0] >> A[1] >> A[2];
  sort(A, A + 3);
  ans = A[2] - (A[0] + A[1]) + 1;
  if (ans > 0)
    cout << ans;
  else
    cout << "0";
  return 0;
}