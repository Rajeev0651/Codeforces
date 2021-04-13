#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, odd = 0, even = 0;
  cin >> N;
  if (N % 2 == 0)
    even++;
  else
    odd++;
  for (int i = 1; i <= N / 2; i++)
  {
    if (i % 2 == 0 && N % i == 0)
      even++;
    else if (i % 2 == 1 && N % i == 0)
      odd++;
  }
  string ans = (odd == even) ? "YES" : "NO";
  cout << ans;
  return 0;
}