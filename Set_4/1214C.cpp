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
  stack<char> stkc;
  for (int i = 0; i < N; i++)
  {
    if (S[i] == '(')
      stkc.push('(');
    else
    {
      if (stkc.size() >= 1)
        if (stkc.top() == '(')
          stkc.pop();
        else
          stkc.push(')');
      else
        stkc.push(')');
    }
  }
  if (stkc.size() == 0 || stkc.size() == 2)
  {
    if (stkc.size() == 0)
    {
      cout << "YES\n";
      return;
    }
    char x = stkc.top();
    stkc.pop();
    char y = stkc.top();
    if (x == '(' && y == ')')
    {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}