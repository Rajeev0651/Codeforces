//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, X;
  cin >> N >> X;
  int A[N];
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    A[i] %= X;
  }
  int sum = 0, left = -1, right = N;
  for (int i = 0; i < N; i++)
  {
    if (A[i] != 0)
    {
      left = i;
      break;
    }
  }
  for (int i = N - 1; i > left; i--)
  {
    if (A[i] != 0)
    {
      right = i;
      break;
    }
  }
  if (left == -1)
  {
    cout << "-1\n";
    return;
  }
  if (right == N)
  {
    right = N - 1;
  }
  for (int i = left; i <= right; i++)
  {
    sum += A[i];
  }
  if ((sum % X) != 0)
  {
    cout << N << "\n";
  }
  else
  {
    int x, y;
    x = left + 1;
    y = N - right - 1;
    int ans;
    if (x > y)
    {
      ans = right;
    }
    else
    {
      ans = N - left - 1;
    }
    cout << ans << "\n";
  }
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