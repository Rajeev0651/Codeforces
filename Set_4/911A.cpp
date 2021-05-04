//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, c;
  cin >> N;
  vector<int> A;
  FOR(i, 0, N - 1)
  {
    cin >> c;
    A.push_back(c);
  }
  int len = A.size();
  int val = *min_element(A.begin(), A.end());
  int left, right;
  for (int i = 0; i < len; i++)
  {
    if (A[i] == val)
    {
      left = i;
      break;
    }
  }
  int ans = INT_MAX;
  for (int i = left + 1; i < len; i++)
  {
    if (A[i] == val)
    {
      ans = min(ans, i - left);
      left = i;
    }
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}