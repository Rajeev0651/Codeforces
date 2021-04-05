#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    long int a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    long long int pro1, pro2;
    pro1 = a - min(a - x, n);
    if (a - x < n)
    {
      pro2 = b - min(b - y, n - a + x);
    }
    else
    {
      pro2 = b;
    }
    long long int ans1 = pro1 * pro2;
    long long int pro3, pro4;
    swap(a, b);
    swap(x, y);
    pro3 = a - min(a - x, n);
    if (a - x < n)
    {
      pro4 = b - min(b - y, n - a + x);
    }
    else
    {
      pro4 = b;
    }
    long long int ans2 = pro3 * pro4;
    cout << min(ans1, ans2) << "\n";
  }
  return 0;
}