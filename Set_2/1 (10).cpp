#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, x;
  vector<int> A;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> x;
    A.push_back(x);
  }
  sort(A.begin(), A.end());
  long long int sum=0, count = 0;
  for (int i = 0; i < N; i++)
  {
    if (A[i] < sum)
    {
      count++;
      continue;
    }
    sum+=A[i];
  }
  cout << N - count;
  return 0;
}
