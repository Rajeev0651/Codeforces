#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, x;
  cin >> N;
  vector<int> A;
  for (int i = 0; i < N; i++)
  {
    cin >> x;
    A.push_back(x);
  }
  int l = 0, r = 0;
  for (int i = 0; i < N-1; i++)
  {
    if (A[i] > A[i + 1])
    {
      l = i;
      break;
    }
  }
  for (int i = l; i < N - 1; i++)
  {
    if (A[i] > A[i + 1])
      r = i + 1;
    else
      break;
  }
  sort(A.begin() + l, A.begin() + r+1);
  if (is_sorted(A.begin(), A.end()))
  {
    cout << "yes\n";
    cout << l+1 << " " << r+1;
  }
  else
  {
    cout << "no";
  }
  return 0;
}