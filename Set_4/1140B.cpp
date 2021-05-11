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
  string S;
  cin >> S;
  int len = S.length();
  int val, a = 0, b = 0;
  int ls = 0, gr = 0;
  for (int i = 0; i < len; i++)
  {
    if (S[i] == '<')
      ls = 1;
    else
      gr = 1;
  }
  if (ls == 0 || gr == 0)
  {
    cout << "0\n";
    return;
  }
  for (int i = 0; i < len; i++)
  {
    if (S[i] == '>')
    {
      a = i;
      break;
    }
  }
  for (int i = N - 1; i >= 0; i--)
  {
    if (S[i] == '<')
    {
      b = i;
      break;
    }
  }
  int x, y, ans;
  x = a;
  y = N - 1 - b;
  cout << min(x, y) << "\n";
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