//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve(int k)
{
  int N;
  cin >> N;
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  if (N == 1)
  {
    cout << "YES\n";
    return;
  }
  int p;
  if (A[0] == 1 && A[1] == N)
    p = -1;
  else if (A[0] == N && A[1] == 1)
    p = 1;
  else if (A[1] > A[0])
    p = 1;
  else if (A[1] < A[0])
    p = -1;
  int val = A[0];
  string ans = "YES";
  for (int i = 1; i < N; i++)
  {
    val = (val + p) % N;
    if (val == 0)
      val = N;
    if (A[i] != val)
    {
      ans = "NO";
      break;
    }
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  int k = 1;
  while (T--)
  {
    solve(k++);
  }
  return 0;
}