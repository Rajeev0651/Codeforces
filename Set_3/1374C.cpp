#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int N;
    string S;
    cin >> N;
    stack<char> Stk;
    cin >> S;
    for (int i = 0; i < N; i++)
    {
      char c = S[i];
      if (c == ')' && !Stk.empty() && Stk.top() == '(')
      {
        Stk.pop();
      }
      else if (c == '(')
      {
        Stk.push('(');
      }
      else if (c == ')')
        Stk.push(')');
    }
    int len = Stk.size();
    cout << len / 2 << "\n";
  }
  return 0;
}