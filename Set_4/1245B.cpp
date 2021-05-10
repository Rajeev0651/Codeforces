//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, a, b, c;
  cin >> N;
  string S;
  cin >> a >> b >> c;
  cin >> S;
  int len = S.length(), ans = 0;
  vector<char> vc;
  for (int i = 0; i < len; i++)
  {
    if (S[i] == 'R' && b >= 1)
    {
      vc.push_back('P');
      b--;
      ans++;
    }
    else if (S[i] == 'P' && c >= 1)
    {
      vc.push_back('S');
      c--;
      ans++;
    }
    else if (S[i] == 'S' && a >= 1)
    {
      vc.push_back('R');
      a--;
      ans++;
    }
    else
    {
      vc.push_back('*');
    }
  }
  int k = N / 2;
  if (N % 2 == 1)
    k++;
  if (ans >= k)
  {
    cout << "YES\n";
    for (auto &i : vc)
    {
      if (i != '*')
        cout << i;
      else if (a >= 1)
      {
        cout << "R";
        a--;
      }
      else if (b >= 1)
      {
        cout << "P";
        b--;
      }
      else if (c >= 1)
      {
        cout << "S";
        c--;
      }
    }
  }
  else
    cout << "NO";
  cout << "\n";
}

int main()
{
  //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}