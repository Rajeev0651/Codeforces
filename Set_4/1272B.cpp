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
  int left = 0, right = 0, up = 0, down = 0;
  int len = S.length();
  for (int i = 0; i < len; i++)
  {
    if (S[i] == 'L')
      left++;
    else if (S[i] == 'R')
      right++;
    else if (S[i] == 'U')
      up++;
    else
      down++;
  }
  if (left >= 1 && right >= 1)
  {
    left = min(left, right);
    right = left;
  }
  else
  {
    left = right = 0;
  }
  if (up >= 1 && down >= 1)
  {
    up = min(up, down);
    down = up;
  }
  else
  {
    up = down = 0;
  }
  if (left >= 1 && right >= 1 && up >= 1 && down >= 1)
  {
    cout << left + right + up + down << "\n";
    for (int i = 1; i <= down; i++)
      cout << "D";
    for (int i = 1; i <= right; i++)
      cout << "R";
    for (int i = 1; i <= up; i++)
      cout << "U";
    for (int i = 1; i <= left; i++)
      cout << "L";
  }
  else if (left >= 1 && right >= 1)
    cout << "2\nLR";
  else if (up >= 1 && down >= 1)
    cout << "2\nUD";
  else
  {
    cout << "0\n";
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