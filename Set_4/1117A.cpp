//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, len = 0, c;
  cin >> N;
  vector<int> A;
  FOR(i, 0, N - 1)
  {
    cin >> c;
    A.push_back(c);
  }
  l val = *max_element(A.begin(), A.end());
  int cur = 0;
  FOR(i, 0, N - 1)
  {
    if (A[i] == val)
    {
      cur++;
      len = max(len, cur);
    }
    else
    {
      cur = 0;
    }
  }
  cout << len << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}