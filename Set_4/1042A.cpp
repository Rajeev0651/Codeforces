//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, M, minval, maxval, val = 0, ans;
  cin >> N >> M;
  ll A[N], k = M;
  for (int i = 0; i < N; i++)
    cin >> A[i];
  sort(A, A + N);
  for (int i = N - 1; i >= 0; i--)
  {
    val = (A[N - 1] - A[i]);
    ans = min(val, k);
    A[i] = A[i] + ans;
    k -= ans;
    if (k == 0)
      break;
  }
  ll x = ceil((float)k / (float)N);
  minval = *max_element(A, A + N) + x;
  maxval = A[N - 1] + M;
  cout << minval << " " << maxval << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}