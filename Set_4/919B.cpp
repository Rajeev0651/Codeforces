//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

int fun(int N)
{
  int sum = 0;
  while (N)
  {
    sum += (N % 10);
    N /= 10;
  }
  return sum;
}
void solve()
{
  int ans[10000], count = 0;
  int N;
  for (int i = 19; count < 10000; i++)
  {
    if (fun(i) == 10)
    {
      ans[count++] = i;
    }
  }
  cin >> N;
  cout << ans[N - 1];
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}