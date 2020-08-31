#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, a, b;
  string ans = "Happy Alex";
  cin >> N;
  vector<pair<int, int>> A;
  for (int i = 0; i < N; i++)
  {
    cin >> a >> b;
    A.push_back(make_pair(a, b));
  }
  sort(A.begin(), A.end());
  int minm = A[0].second;
  for (int i = 0; i < N; i++)
  {
    if (A[i].second > minm)
    {
      ans = "Poor Alex";
      break;
    }
  }
  cout<<ans;
  return 0;
}