//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve(int n, int h, int a, int b, int k)
{
  int dis1, dis2, dis3, ans = -1;
  int x1, y1, x2, y2;
  int p;
  cin >> x1 >> y1 >> x2 >> y2;
  if (y1 >= a && y1 <= b)
  {
    dis1 = 0;
    p = y1;
  }
  else
  {
    dis1 = min(abs(y1 - a), abs(y1 - b));
    p = abs(y1 - a) < abs(y1 - b) ? a : b;
  }
  dis2 = abs(y2 - p);
  dis3 = abs(x1 - x2);
  //cout << p << " " << dis1 << " " << dis2 << " " << dis3 << "\n";
  ans = dis1 + dis2 + dis3;
  if (x1 == x2)
    ans = abs(y1 - y2);
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n, h, a, b, k;
  cin >> n >> h >> a >> b >> k;
  while (k--)
  {
    solve(n, h, a, b, k);
  }
  return 0;
}