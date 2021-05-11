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
  ll A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  sort(A, A + N);
  ll left = 0, right = 0, ans = LONG_MIN;
  int x = N, y = N;
  while (left < N && right < N && left <= right)
  {
    if (left == x && right == y)
      break;
    if ((A[right] - A[left]) <= 5)
    {
      ans = max(ans, right - left + 1);
    }
    x = left;
    y = right;
    if (A[right] - A[left] <= 5)
      right++;
    else
      left++;
    if (right == N)
      right = N - 1;
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}