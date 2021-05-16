//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, count = 0;
  cin >> N;
  if (N % 2 == 0)
  {
    cout << N / 2;
    return;
  }
  else if (N % 3 == 0)
  {
    cout << (N - 3) / 2 + 1;
    return;
  }
  else if (N % 5 == 0)
  {
    for (int i = N; i >= 5; i -= 5)
    {
      count++;
      N -= 5;
      if (N % 3 == 0)
        break;
    }
    if (N % 3 == 0 && N >= 3)
    {
      cout << count + 1 + ((N - 3) / 2);
      return;
    }
    cout << count;
  }
  else
  {
    cout << 1 << "\n";
    return;
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}