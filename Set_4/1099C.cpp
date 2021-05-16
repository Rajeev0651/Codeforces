//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int k;
  string S;
  cin >> S >> k;
  int f = 0, len = S.length(), c = 0, count = 0;
  for (int i = 0; i < len; i++)
  {
    if (S[i] == '*')
      f++;
    else if (S[i] == '?')
      c++;
    else
      count++;
  }
  int minchar = count - (c + f);
  string ans = "NO";
  if (k >= minchar)
  {
    if (f >= 1)
    {
      ans = "YES";
    }
    else if (k <= count)
    {
      ans = "YES";
    }
  }
  if (ans == "YES")
  {
    string res;
    if (f >= 1)
    {
      int x = 0;
      if (k > minchar)
        x = k - minchar;
      for (int i = 0; i < len; i++)
      {
        if ((S[i] != '?') && (S[i] != '*'))
          res += S[i];
        else if (S[i] == '?')
        {
          res.pop_back();
        }
        else
        {
          res.pop_back();
          for (int j = 1; j <= x; j++)
          {
            res += S[i - 1];
          }
          x = 0;
        }
        //cout << res << "\n";
      }
    }
    else
    {
      int x = 0;
      if (k > minchar)
        x = k - minchar;
      for (int i = 0; i < len; i++)
      {
        if (S[i] != '?' && S[i] != '*')
          res += S[i];
        else if (S[i] == '?')
        {
          res.pop_back();
          if (x >= 1)
          {
            res += S[i - 1];
            x--;
          }
        }
        else
        {
          res.pop_back();
          if (x >= 1)
          {
            res += S[i - 1];
            x--;
          }
        }
      }
    }
    cout << res << "\n";
  }
  else
    cout << "Impossible\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}