//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, white_cost, black_cost, ans = 0;
  cin >> N >> white_cost >> black_cost;
  int A[N];
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
  }
  if (N % 2 == 1)
  {
    if (A[N / 2] == 2)
      ans += min(white_cost, black_cost);
  }
  FOR(i, 0, (N / 2) - 1)
  {
    if (A[i] == 0 && A[N - i - 1] == 2)
    {
      ans += white_cost;
    }
    else if (A[i] == 1 && A[N - i - 1] == 2)
    {
      ans += black_cost;
    }
    else if (A[i] == 2 && A[N - i - 1] == 0)
    {
      ans += white_cost;
    }
    else if (A[i] == 2 && A[N - i - 1] == 1)
    {
      ans += black_cost;
    }
    else if (A[i] == 2 && A[N - i - 1] == 2)
    {
      ans += 2 * min(white_cost, black_cost);
    }
    else if (A[i] != A[N - i - 1])
    {
      ans = -1;
      break;
    }
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}