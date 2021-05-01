//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

bool fun(string &s1, string &s2)
{
  return s1.size() < s2.size();
}
void solve()
{
  int N, ans = 1;
  string s;
  cin >> N;
  vector<string> S;
  FOR(i, 0, N - 1)
  {
    cin >> s;
    S.push_back(s);
  }
  sort(S.begin(), S.end(), fun);
  for (int i = N - 1; i > 0; i--)
  {
    if (!(S[i].find(S[i - 1]) != string::npos))
    {
      ans = -1;
    }
  }
  if (ans == -1)
    cout << "NO\n";
  else
  {
    cout << "YES\n";
    FOR(i, 0, N - 1)
    {
      cout << S[i] << "\n";
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}