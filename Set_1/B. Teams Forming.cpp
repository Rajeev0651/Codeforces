#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, x,sum=0;
  cin >> N;
  vector<int> A;
  for (int i = 0; i < N; i++)
  {
    cin >> x;
    A.push_back(x);
  }
  sort(A.begin(), A.end());
  for (int i = 0; i < N-1; i+=2)
  {
    sum+=A[i+1]-A[i];
  }
  cout<<sum;
  return 0;
}