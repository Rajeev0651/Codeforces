#include <bits/stdc++.h>
using namespace std;
int main()
{
  double H, L;
  cin >> H >> L;
  double ans;
  ans = (L * L - H * H) / (2 * H);
  cout << fixed << setprecision(13) << ans;
  return 0;
}