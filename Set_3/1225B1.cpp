//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int n, k, d;
  cin >> n >> k >> d;
  int A[n];
  FOR(i, 0, n - 1)
  cin >> A[i];
  set<int> st;
  int ans = INT_MAX;
  for (int i = 0; i <= n - d; i++)
  {
    for (int j = i, x = 1; x <= d; x++, j++)
    {
      st.insert(A[j]);
    }
    int sz = st.size();
    ans = min(ans, sz);
    st.clear();
  }
  cout << ans << "\n";
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