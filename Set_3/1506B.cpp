//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, k, ans = 0;
  cin >> N >> k;
  string S;
  cin >> S;
  int first = S.find('*');
  int last = S.rfind("*");
  S[first] = 'X';
  S[last] = 'X';
  int count = 0;
  for (int i = first; i < last; i++)
  {
    int lst = -1;
    for (int j = i + 1, len = 1; (len <= k) && j <= last; j++, len++)
    {
      if (S[j] == '*')
        lst = j;
      if (S[j] == 'X')
      {
        lst = -1;
        break;
      }
    }
    if (last != lst && lst != -1)
    {
      i = lst - 1;
      count++;
    }
  }
  if (first == last)
    ans++;
  else
    ans += 2;
  cout << ans + count << "\n";
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