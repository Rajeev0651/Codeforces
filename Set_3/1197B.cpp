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
  string ans = "YES";
  auto it = max_element(A.begin(), A.end());
  if (is_sorted(A.begin(), it) && is_sorted(it, A.end(), greater<int>()))
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}