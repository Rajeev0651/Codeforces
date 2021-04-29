//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int n, k;
  cin >> n >> k;
  string S;
  cin >> S;
  int ans = 0, val, count = 0;
  for (int i = 97; i <= 122; i++)
  {
    count = 0;
    val = 0;
    char c = i;
    for (int j = 0; j < n; j++)
    {
      if (S[j] == c)
      {
        val++;
        if (val == k)
        {
          count++;
          ans = max(ans, count);
          val = 0;
        }
      }
      else
        val = 0;
    }
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}