#include <bits/stdc++.h>
using namespace std;
bool fun(const pair<int, int> &a, const pair<int, int> &b)
{
  return (a.second > b.second && a.first == b.first);
}
int main()
{
  int S, N, a, b;
  cin >> S >> N;
  vector<pair<int, int>> A;
  for (int i = 0; i < N; i++)
  {
    cin >> a >> b;
    A.push_back(make_pair(a, b));
  }
  sort(A.begin(), A.end());
  sort(A.begin(), A.end(), fun);
  string ans = "YES";
  cout<<"\n";
  for (int i = 0; i < N; i++)
  {
    cout << A[i].first << " " << A[i].second<<"\n";
  }
  for (int i = 0; i < N; i++)
  {
    if (S >= A[i].first)
    {
      S += A[i].second;
      if (S >= 10000)
      {
        break;
      }
    }
    else
    {
      ans = "NO";
      break;
    }
  }
  cout << ans;
  return 0;
}