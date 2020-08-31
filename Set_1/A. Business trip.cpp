#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, a;
  cin >> N;
  vector<int> A;
  for (int i = 0; i < 12; i++)
  {
    cin >> a;
    A.push_back(a);
  }
  sort(A.begin(), A.end(), greater<int>());
  int sum = 0, count = 0;
  for (int i = 0; i < 12; i++)
  {
    if (sum < N)
    {
      count++;
      sum += A[i];
    }
  }
  if (sum < N)
    count = -1;
  else
  {
    cout << count;
  }
  return 0;
}