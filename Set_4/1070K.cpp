//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, K, total = 0;
  string ans = "Yes";
  cin >> N >> K;
  int A[N], B[K];
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    total += A[i];
  }
  if (total % K != 0)
  {
    ans = "No";
  }
  else
  {
    total = total / K;
    int index = 0, val = 0, count = 0;
    for (int i = 0; i < N; i++)
    {
      val += A[i];
      count++;
      if (val == total)
      {
        B[index++] = count;
        val = 0;
        count = 0;
      }
      else if (val > total)
      {
        ans = "No";
        break;
      }
    }
  }
  if (ans == "Yes")
  {
    cout << ans << "\n";
    for (int i = 0; i < K; i++)
      cout << B[i] << " ";
  }
  else
    cout << "No\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}