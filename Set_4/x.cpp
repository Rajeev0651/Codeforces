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
  for (int i = 0; i < N; i++)
    cin >> A[i];
  int flag[N + 1];
  memset(flag, 0, sizeof(flag));
  for (int i = 0; i < N; i++)
  {
    flag[A[i]] += i;
  }
  int ans = INT_MIN, val;
  for (int i = 0; i <= N; i++)
  {
    if (flag[i] > ans)
    {
      ans = flag[i];
      val = i;
    }
  }
  cout << val;
  cout << "\n";
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