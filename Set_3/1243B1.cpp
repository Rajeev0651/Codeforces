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
  string S1, S2, ans = "Yes";
  cin >> S1 >> S2;
  int a = -1, b = -1;
  FOR(i, 0, N - 1)
  {
    if (S1[i] != S2[i])
    {
      if (a == -1)
        a = i;
      else if (b == -1)
        b = i;
      else
        ans = "No";
    }
  }
  string q = S1, r = S2;
  swap(S1[a], S2[b]);
  swap(q[b], r[a]);
  if (S1.compare(S2) != 0 && q.compare(r) != 0)
    ans = "No";
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