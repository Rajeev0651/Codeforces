//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  string S;
  cin >> S;
  int len = S.length(), pr = 0;
  stack<char> stk;
  for (int i = 0; i < len; i++)
  {
    if (S[i] == 'A')
      stk.push('A');
    else
    {
      if (!stk.empty())
      {
        pr++;
        stk.pop();
      }
      else
        stk.push('B');
    }
  }
  cout << stk.size() << "\n";
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