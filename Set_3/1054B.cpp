//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, ans = -1;
  set<int> St;
  cin >> N;
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  if (A[0] != 0)
  {
    cout << "1\n";
    return;
  }
  St.insert(0);
  FOR(i, 1, N - 1)
  {
    if (A[i] == 1)
    {
      St.insert(A[i]);
      continue;
    }
    if (*(--St.end()) + 1 < A[i])
    {
      ans = i + 1;
      break;
    }
    St.insert(A[i]);
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}