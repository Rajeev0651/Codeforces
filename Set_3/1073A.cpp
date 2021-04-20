//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--

void solve()
{
  int N, mx, ans = -1;
  string p, S;
  cin >> N;
  cin >> S;
  FOR(i, 0, N - 2)
  {
    if (S[i] != S[i + 1])
    {
      ans = 1;
      p = S.substr(i, 2);
      break;
    }
  }
  if (ans == 1)
    cout << "YES\n"
         << p << "\n";
  else
    cout << "NO\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}