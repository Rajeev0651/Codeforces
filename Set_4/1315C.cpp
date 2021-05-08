//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N;
  cin >> N;
  int A[N];
  set<int> flag;
  vector<int> v;
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    flag.insert(A[i]);
    flag.insert(A[i]);
  }
  for (int i = 0; i < N; i++)
  {
    for (int j = 1;; j++)
    {
      if ((j > A[i]) && (flag.find(j) == flag.end()))
      {
        flag.insert(j);
        v.push_back(j);
        break;
      }
    }
  }
  int count1 = 0, count2 = 0;
  for (auto &i : v)
  {
    if (i > 2 * N)
    {
      cout << "-1\n";
      return;
    }
  }
  for (int i = 0; i < 2 * N; i++)
  {
    if (i % 2 == 0)
      cout << A[count1++] << " ";
    else
      cout << v[count2++] << " ";
  }
  cout << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}