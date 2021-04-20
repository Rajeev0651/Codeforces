//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  string s1, s2;
  cin >> s1 >> s2;
  set<char> a, b;
  vector<int> ans(100);
  vector<int>::iterator it;
  int len1 = s1.length();
  FOR(i, 0, len1 - 1)
  {
    a.insert(s1[i]);
    b.insert(s2[i]);
  }
  string res;
  it = set_intersection(a.begin(), a.end(), b.begin(), b.end(), ans.begin());
  ans.resize(it - ans.begin());
  if (ans.size() != 0)
    res = "YES";
  else
    res = "NO";
  cout << res << "\n";
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