//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i < b; i++)

void solve()
{
  int N;
  cin >> N;
  int A[N];
  FOR(i, 0, N)
  cin >> A[i];
  FOR(i, 0, N)
  cout << abs(A[i] - N) + 1 << " ";
  cout << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}