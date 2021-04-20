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
  if (n == 1 && k > 0)
    S[0] = '0';
  else if (S[0] != '1' && k > 0)
  {
    S[0] = '1';
    k--;
  }
  FOR(i, 1, n - 1)
  {
    if (S[i] != '0' && k > 0)
    {
      S[i] = '0';
      k--;
    }
    if (k == 0)
      break;
  }
  cout << S << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}