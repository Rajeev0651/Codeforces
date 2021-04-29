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
  set<int, greater<int>> un, in;
  cin >> N;
  vector<int> A;
  un.insert(1);
  FOR(i, 0, N - 1)
  {
    cin >> c;
    A.push_back(c);
  }
  int val, X, Y;
  auto itr = max_element(A.begin(), A.end());
  val = *itr;
  A.erase(itr);
  for (int i = 0; i < N; i++)
  {
    if (val == A[i] || (val % A[i] != 0))
      un.insert(A[i]);
  }
  cout << *un.begin() << " " << val << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}