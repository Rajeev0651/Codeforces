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
  stack<char> stk;
  int len = S.length();
  int counter = 0;
  for (int i = 0; i < len; i++)
  {
    if (stk.empty())
      stk.push(S[i]);
    else
    {
      if (stk.top() == S[i])
      {
        stk.pop();
        counter = (counter + 1) % 2;
      }
      else
        stk.push(S[i]);
    }
  }
  if (counter == 0)
    cout << "NO\n";
  else
    cout << "YES\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}