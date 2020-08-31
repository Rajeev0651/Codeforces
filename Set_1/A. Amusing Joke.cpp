#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a, b, c;
  cin >> a >> b >> c;
  a = a + b;
  sort(a.begin(), a.end());
  sort(c.begin(), c.end());
  //cout << a << " " << c << "\n";
  if (a.compare(c) != 0)
    cout << "NO";
  else
  {
    cout << "YES";
  }
  return 0;
}