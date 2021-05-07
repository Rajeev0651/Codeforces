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
  FOR(i, 0, N - 1)
  cin >> A[i];
  sort(A, A + N);
  int count = 0, ans = INT_MIN;
  for (int k = 1; k <= 2 * N; k++)
  {
    count = 0;
    int left = 0, right = N - 1, x;
    while (left < right)
    {
      x = A[left] + A[right];
      if (x == k)
      {
        count++;
        left++;
        right--;
      }
      else if (x > k)
        right--;
      else
        left++;
    }
    ans = max(ans, count);
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