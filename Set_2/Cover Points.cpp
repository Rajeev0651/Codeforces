#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int X[N], Y[N], ans = -1;
  for (int i = 0; i < N; i++)
  {
    cin >> X[i] >> Y[i];
    ans = max(X[i] + Y[i], ans);
  }
  cout << ans;
  return 0;
}