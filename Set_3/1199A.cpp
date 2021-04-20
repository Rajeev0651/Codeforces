//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, x, y, ans = -1;
  set<int> St;
  cin >> N >> x >> y;
  int A[N + 1];
  FOR(i, 1, N)
  {
    cin >> A[i];
  }
  int val = INT_MAX;
  for (int i = 1; i <= N; i++)
  {
    int left = max(1, i - x);
    int right = min(N, i + y);
    val = INT_MAX;
    FOR(j, left, right)
    {
      val = min(val, A[j]);
    }
    if (A[i] == val)
    {
      ans = i;
      break;
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