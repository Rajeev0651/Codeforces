//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, X, Y, count = 0;
  cin >> N >> X >> Y;
  string S;
  cin >> S;
  for (int j = N - X; j < N; j++)
  {
    if (j == (N - Y - 1) && S[j] != '1')
      count++;
    else if (j != (N - Y - 1))
    {
      if (S[j] == '1')
        count++;
    }
  }
  cout << count << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}