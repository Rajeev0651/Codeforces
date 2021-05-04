//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve(int p)
{
  int a, b, x, y;
  cin >> a >> b;
  x = a, y = b;
  string S;
  cin >> S;
  int len = S.length();
  string ans = "YES";
  for (int i = 0; i < len; i++)
  {
    if (S[i] == '1')
      b--;
    else if (S[i] == '0')
      a--;
  }
  if (a < 0 || b < 0)
  {
    cout << "-1\n";
    return;
  }
  int v;
  if (len % 2 == 0)
    v = len / 2;
  else
    v = (len - 1) / 2;
  for (int i = 0; i < v; i++)
  {
    int j = len - i - 1;
    if (S[i] == '?')
    {
      if (S[j] == '0')
      {
        if (a >= 1)
        {
          S[i] = '0';
          a--;
        }
      }
      else if (S[j] == '1')
      {
        if (b >= 1)
        {
          S[i] = '1';
          b--;
        }
      }
    }
    else if (S[j] == '?')
    {
      if (S[i] == '0')
      {
        if (a >= 1)
        {
          S[j] = '0';
          a--;
        }
      }
      else if (S[i] == '1')
      {
        if (b >= 1)
        {
          S[j] = '1';
          b--;
        }
      }
    }
  }
  for (int i = 0; i < v; i++)
  {
    int j = len - i - 1;
    if (S[i] == '?' && S[j] == '?')
    {
      if (a >= b && a >= 2)
      {
        S[i] = '0';
        S[j] = '0';
        a -= 2;
      }
      else if (b >= a && b >= 2)
      {
        S[i] = '1';
        S[j] = '1';
        b -= 2;
      }
    }
  }
  if (len % 2 == 1)
  {
    if (a == 1 && b == 0)
    {
      S[len / 2] = '0';
      a--;
    }
    else if (b == 1 && a == 0)
    {
      S[len / 2] = '1';
      b--;
    }
  }
  if (a != 0 || b != 0)
    ans = "NO";
  for (int i = 0; i < len; i++)
  {
    if (S[i] != S[len - i - 1])
    {
      ans = "NO";
      break;
    }
  }
  if (ans == "YES")
    cout << S << "\n";
  else
    cout << "-1\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  int k = 1;
  while (T--)
  {
    solve(k++);
  }
  return 0;
}