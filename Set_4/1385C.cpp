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
  int right = N - 1, flag = 0;
  while (right >= 1)
  {
    if (A[right - 1] >= A[right])
    {
      right--;
    }
    else
      break;
  }
  while (right >= 1)
  {
    if (A[right - 1] <= A[right])
    {
      right--;
    }
    else
      break;
  }
  cout << right << "\n";
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