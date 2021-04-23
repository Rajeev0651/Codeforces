//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> x(a, 0);
  x[0] = 1;
  vector<int> y(b, 0);
  y[0] = 1;
  y[b - c] = 1;
  for (int i = 0; i < a; i++)
    cout << x[i];
  cout << " ";
  for (int i = 0; i < b; i++)
    cout << y[i];
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