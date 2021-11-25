#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, x, maxm = -1, count = 0;
  vector<int> A;
  int hash[1001] = {0};
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> x;
    hash[x]++;
    A.push_back(x);
  }
  for (int i = 1; i <= 1000; i++)
  {
    maxm = max(maxm, hash[i]);
    if (hash[i] != 0)
      count++;
  }
  cout << maxm << " " << count;
  return 0;
}