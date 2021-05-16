//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, p;
  string x;
  cin >> N;
  int a = INT_MAX, b = INT_MAX, c = INT_MAX, ab = INT_MAX, bc = INT_MAX, ca = INT_MAX, abc = INT_MAX;
  FOR(i, 0, N - 1)
  {
    cin >> p >> x;
    int len = x.length();
    if (len == 1)
    {
      if (x == "A")
        a = min(a, p);
      else if (x == "B")
        b = min(b, p);
      else
        c = min(c, p);
    }
    else if (len == 2)
    {
      if (x.find('A') != string::npos && x.find('B') != string::npos)
        ab = min(ab, p);
      else if (x.find('B') != string::npos && x.find('C') != string::npos)
        bc = min(bc, p);
      else
        ca = min(ca, p);
    }
    else
      abc = min(abc, p);
  }
  int ans = INT_MAX, flag = 0;
  if (abc <= 100000)
  {
    ans = min(ans, abc);
    flag = 1;
  }
  if (ab <= 100000 && bc <= 100000)
  {
    ans = min(ans, ab + bc);
    flag = 1;
  }
  if (ab <= 100000 && ca <= 100000)
  {
    ans = min(ans, ab + ca);
    flag = 1;
  }
  if (bc <= 100000 && ca <= 100000)
  {
    ans = min(ans, bc + ca);
    flag = 1;
  }
  if (a <= 100000 && b <= 100000 && c <= 100000)
  {
    ans = min(ans, a + b + c);
    flag = 1;
  }
  if (a <= 100000 && bc <= 100000)
  {
    ans = min(ans, a + bc);
    flag = 1;
  }
  if (b <= 100000 && ca <= 100000)
  {
    ans = min(ans, ca + b);
    flag = 1;
  }
  if (c <= 100000 && ab <= 100000)
  {
    ans = min(ans, c + ab);
    flag = 1;
  }
  if (flag == 0)
    cout << "-1\n";
  else
    cout << ans;
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}