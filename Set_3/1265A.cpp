//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i < b; i++)

void solve()
{
  string S;
  int ans = 0;
  cin >> S;
  int len = S.length();
  FOR(i, 0, len - 1)
  {
    if ((S[i] == S[i + 1]) && (S[i] != '?' && S[i + 1] != '?'))
    {
      ans = -1;
      break;
    }
  }
  if (S[0] == '?')
  {
    if (len > 1)
      S[0] = S[1] == 'a' ? 'b' : S[1] == 'c' ? 'b'
                                             : 'a';
    else
      S[0] = 'a';
  }
  if (S[len - 1] == '?')
  {
    if (len > 1)
      S[len - 1] = S[len - 2] == 'a' ? 'b' : S[len - 2] == 'c' ? 'b'
                                                               : 'a';
    else
      S[len - 1] = 'a';
  }
  int a = 0, b = 0, c = 0;
  FOR(i, 1, len - 1)
  {
    if (S[i] == '?')
    {
      a = 0, b = 0, c = 0;
      a = S[i - 1] == 'a' ? 1 : 0;
      b = S[i - 1] == 'b' ? 1 : 0;
      c = S[i - 1] == 'c' ? 1 : 0;
      a = S[i + 1] == 'a' || a == 1 ? 1 : 0;
      b = S[i + 1] == 'b' || b == 1 ? 1 : 0;
      c = S[i + 1] == 'c' || c == 1 ? 1 : 0;
      S[i] = a == 0 ? 'a' : b == 0 ? 'b'
                                   : 'c';
    }
  }
  if (ans == -1)
    cout << "-1";
  else
    FOR(i, 0, len)
    {
      cout << S[i];
    }
  cout << "\n";
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