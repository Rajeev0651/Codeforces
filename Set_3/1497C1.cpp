#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    long int n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
      if ((n / 2) % 2 == 0)
      {
        cout << n / 2 << " " << n / 4 << " " << n / 4;
      }
      else
      {
        cout << n / 2 - 1 << " " << n / 2 - 1 << " " << 2;
      }
    }
    else
    {
      cout << n / 2 << " " << n / 2 << " " << 1;
    }
    cout << "\n";
  }
  return 0;
}