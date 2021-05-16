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
  int len = S.length();
  if (len <= 20)
  {
    cout << 1 << " " << len << "\n";
    cout << S << "\n";
    return;
  }
  int x, y;
  int flag = 0;
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 20; j++)
    {
      if ((i * j) >= len)
      {
        x = i;
        y = j;
        flag = 1;
        break;
      }
    }
    if (flag == 1)
      break;
  }
  cout << x << " " << y << "\n";
  int star = (x * y) - len;
  int count = 0, p = y;
  for (int i = 1; i <= x; i++)
  {
    if (star >= 1)
    {
      cout << '*';
      p = y - 1;
      star--;
    }
    else
      p = y;
    for (int j = 1; j <= p; j++)
    {
      cout << S[count++];
    }
    cout << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}