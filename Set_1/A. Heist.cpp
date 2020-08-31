#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, c;
  cin >> N;
  vector<int> A;
  for (int i = 0; i < N; i++)
  {
    cin >> c;
    A.push_back(c);
  }
  int minm, maxm;
  minm = *min_element(A.begin(), A.end());
  maxm = *max_element(A.begin(), A.end());
  cout << maxm - minm + 1 - N;
  return 0;
}