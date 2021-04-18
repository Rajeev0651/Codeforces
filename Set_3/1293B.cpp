#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  float N;
  cin >> N;
  float ans = 0;
  for (int i = N; i >= 1; i--)
  {
    float x = i;
    ans += (1 / x);
  }
  cout << setprecision(4) << fixed << ans << "\n";
  return 0;
}