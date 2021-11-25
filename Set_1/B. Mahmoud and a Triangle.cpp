#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, x;
  string ans = "NO";
  cin >> N;
  vector<int> A;
  for (int i = 0; i < N; i++)
  {
    cin >> x;
    A.push_back(x);
  }
  sort(A.begin(), A.end());
  for (int i = 0; i < N-2; i++)
  {
    if (A[i] + A[i + 1] > A[i + 2])
    {
      ans = "YES";
      break;
    }
  }
  cout << ans;
}