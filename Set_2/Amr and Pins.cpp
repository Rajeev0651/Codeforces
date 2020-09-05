#include <bits/stdc++.h>
using namespace std;
int main()
{
  double r, a, b, c, d, dis, val;
  cin >> r >> a >> b >> c >> d;
  val = sqrt(pow(c - a, 2) + pow(d - b, 2));
  dis = ceil(val / (r * 2));
  cout << dis << "\n";
  return 0;
}