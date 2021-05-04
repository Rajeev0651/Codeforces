//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, K;
  cin >> N >> K;
  if (N % 2 == 0)
  {
    if (K > N)
    {
      K = K % N;
      if (K == 0)
        K = N;
    }
    cout << K << "\n";
    return;
  }
  int cross = N / 2;
  int esc = (K - 1) / cross;
  int step = K + esc;
  if (step > N)
  {
    step = step % N;
    if (step == 0)
      step = N;
  }
  cout << step << "\n";
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