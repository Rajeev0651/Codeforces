#include <bits/stdc++.h>
using namespace std;

bool check(string s, int l)
{
  for (int i = 0, j = l - 1; i < j; i++, j--)
  {
    if (s[i] != s[j])
      return 0;
  }
  return 1;
}
bool all(string s, int l)
{
  for (int i = 0; i < l; i++)
  {
    if (s[i] != 'a')
      return 0;
  }
  return 1;
}
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    string S;
    cin >> S;
    if (all(S, S.length()))
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n";
      if (check(S, S.length()))
      {
        cout << "a" << S << "\n";
      }
      else
      {
        string k = S;
        k.append("a");
        bool val = check(k, k.length());
        //cout << k<< " "<<val << "\n";
            if (val)
        {
          cout << "a" << S << "\n";
        }
        else
        {
          cout << S << "a\n";
        }
      }
    }
  }
  return 0;
}