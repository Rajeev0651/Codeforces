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
  set<int> sti;
  vector<int> ans;
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    sti.insert(i + 1);
  }
  for (int i = 0; i < N; i++)
  {
    if ((i + 1 > A[i]))
    {
      cout << "-1\n";
      return;
    }
    if (sti.find(A[i]) != sti.end())
    {
      ans.push_back(A[i]);
      sti.erase(A[i]);
    }
    else
    {
      ans.push_back(*sti.begin());
      sti.erase(*sti.begin());
    }
  }
  for (auto &i : sti)
  {
    ans.push_back(i);
  }
  for (auto &i : ans)
    cout << i << " ";
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