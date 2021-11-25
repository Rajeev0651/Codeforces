#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, K, a;
  cin >> N >> K;
  vector<int> A;
  int sum = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> a;
    A.push_back(a);
  }
  sort(A.begin(), A.end());
  for (int i = 0; i < K; i++)
  {
    if (A[i] < 0)
    {
      sum += abs(A[i]);
    }
    else
    {
      break;
    }
  }
  cout<<sum;
}