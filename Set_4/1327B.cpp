//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, c, p;
  cin >> N;
  vector<vector<int>> A;
  int king[N + 1];
  vector<int> d;
  memset(king, 0, sizeof(king));
  for (int i = 0; i < N; i++)
  {
    cin >> p;
    for (int j = 0; j < p; j++)
    {
      cin >> c;
      A[i][j] = c;
    }
  }
  for (int i = 0; i < N; i++)
  {
    int val = INT_MAX;
    for (auto &it : A[i])
    {
      if (king[it] == 0)
        val = min(val, it);
    }
    if (king[val] == 0 && val != INT_MAX)
    {
      king[val] = 1;
    }
    else
      d.push_back(i);
  }
  set<int> st;
  for (int i = 1; i <= N; i++)
  {
    if (king[i] == 0)
      st.insert(i);
  }
  for (auto &i : d)
  {
    for (auto &j : A[i])
    {
        }
  }
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