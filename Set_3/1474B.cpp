#include <bits/stdc++.h>
using namespace std;
set<int> S;
void SieveOfEratosthenes(int n)
{
  bool prime[n + 1];
  memset(prime, true, sizeof(prime));

  for (int p = 2; p * p <= n; p++)
  {
    if (prime[p] == true)
    {
      for (int i = p * p; i <= n; i += p)
        prime[i] = false;
    }
  }

  // Print all prime numbers
  for (int p = 2; p <= n; p++)
    if (prime[p])
      S.insert(p);
}
int main()
{
  //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  SieveOfEratosthenes(21000);
  int T;
  cin >> T;
  while (T--)
  {
    long long int d;
    cin >> d;
    long long int x = *S.lower_bound(1 + d);
    long long int y = *S.lower_bound(x + d);
    cout << x * y << "\n";
  }
  return 0;
}