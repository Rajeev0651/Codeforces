//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int R, D, N, ans = 0;
  cin >> R >> D >> N;
  float X[N], Y[N], r[N];
  for (int i = 0; i < N; i++)
  {
    cin >> X[i] >> Y[i] >> r[i];
  }
  for (int i = 0; i < N; i++)
  {
    float val = sqrt(pow(X[i], (float)2) + pow(Y[i], (float)2));
    if (((val - r[i]) >= (R - D)) && ((val + r[i]) <= R))
      ans++;
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}