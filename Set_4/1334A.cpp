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
  int A[N + 1], B[N + 1];
  for (int i = 1; i <= N; i++)
  {
    cin >> A[i] >> B[i];
  }
  A[0] = B[0] = 0;
  string ans = "YES";
  for (int i = 1; i <= N; i++)
  {
    if ((A[i] >= A[i - 1]) && (B[i] >= B[i - 1]))
    {
      if ((A[i] - A[i - 1]) < (B[i] - B[i - 1]))
      {
        ans = "NO";
      }
    }
    else if ((A[i] < A[i - 1]) || (B[i] < B[i - 1]))
      ans = "NO";
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