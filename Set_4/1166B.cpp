//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, x = 5, y = -1;
  cin >> N;
  string a[5] = {"aeiou", "uaeio", "ouaei", "iouae", "eioua"};
  string b[5] = {"a", "e", "i", "o", "u"};
  while (x <= N / 5)
  {
    if (N % x == 0)
    {
      y = N / x;
      break;
    }
    x++;
  }
  if (y == -1)
  {
    cout << "-1\n";
  }
  else
  {
    if (x > y)
      swap(x, y);
    for (int i = 1; i <= 5; i++)
    {
      cout << a[i - 1];
      for (int j = 6; j <= x; j++)
      {
        cout << b[i - 1];
      }
    }
    for (int i = 6; i <= y; i++)
    {
      cout << a[0];
      for (int j = 6; j <= x; j++)
      {
        cout << "a";
      }
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