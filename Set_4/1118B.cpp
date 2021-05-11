//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N;
  cin >> N;
  int A[N];
  int even = 0, odd = 0;
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    if (A[i] % 2 == 0)
      even += A[i];
    else
      odd += A[i];
  }
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    if (i % 2 == 0)
    {
      if ((odd - A[i]) == even)
        ans++;
    }
    else if ((even - A[i]) == odd)
      ans++;
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}