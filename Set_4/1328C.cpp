//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N;
  cin >> N;
  string S, x, y;
  cin >> S;
  int flag = 0;
  for (int i = 0; i < N; i++)
  {
    if (flag == 1)
    {
      x += "0";
      y += S[i];
    }
    else if (S[i] == '2' || S[i] == '0')
    {
      x += to_string((S[i] - 48) / 2);
      y += to_string((S[i] - 48) / 2);
    }
    else
    {
      flag = 1;
      x += "1";
      y += "0";
    }
  }
  cout << x << "\n"
       << y << "\n";
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