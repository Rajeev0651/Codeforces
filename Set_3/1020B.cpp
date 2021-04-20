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
  FOR(i, 0, N - 1)
  cin >> A[i];
  set<int> St;
  int curr = -1, ans[N];
  for (int i = 0; i < N; i++)
  {
    St.insert(i + 1);
    curr = A[i];
    while (1)
    {
      if (St.find(curr) != St.end())
      {
        ans[i] = curr;
        break;
      }
      St.insert(curr);
      curr = A[curr - 1];
    }
    St.clear();
  }
  FOR(i, 0, N - 1)
  cout << ans[i] << " ";
  cout << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}