#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n, v, u, ans = INT_MAX;
    cin >> n >> u >> v;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 1; i < n; i++)
    {
      if (abs(a[i] - a[i - 1]) >= 2)
        ans = 0;
      if (abs(a[i] - a[i - 1]) == 1)
        ans = min(ans, min(u, v));
      if (a[i] == a[i])
       ans = min(ans, v+min(u,v));
    }
      cout<<ans<<"\n";
  }
  return 0;
}