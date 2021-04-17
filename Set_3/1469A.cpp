#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    string S;
    cin >> S;
    int len = S.length();
    if (len % 2 == 0 && S[0] != ')' && S[len - 1] != '(')
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}