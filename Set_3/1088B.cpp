//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int n, k;
  cin >> n >> k;
  set<int> St;
  int A[n];
  FOR(i, 0, n - 1)
  {
    cin >> A[i];
    St.insert(A[i]);
  }
  int x = *St.begin();
  cout << x << "\n";
  while (k--)
  {
    }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}