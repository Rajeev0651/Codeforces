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
  int A[N], flag[N];
  memset(flag, 0, sizeof(flag));
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  int ans = 0;
  for (int i = 0; i < N - 1; i++)
  {
    int counter = A[i];
    for (int j = i + 1; j < N; j++)
    {
      counter++;
      if (A[j] == counter)
      {
        ans++;
      }
    }
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}