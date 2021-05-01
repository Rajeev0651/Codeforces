//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, M;
  cin >> N >> M;
  ll A[N], B[N], diff[N], Bval = 0, Aval = 0;
  FOR(i, 0, N - 1)
  {
    cin >> A[i] >> B[i];
    Bval += B[i];
    Aval += A[i];
    diff[i] = A[i] - B[i];
  }
  if (M < Bval)
  {
    cout << -1 << "\n";
    return;
  }
  if (Aval <= M)
  {
    cout << 0 << "\n";
    return;
  }
  sort(diff, diff + N, greater<ll>());
  ll count = 0;
  FOR(i, 0, N - 1)
  {
    Aval -= diff[i];
    count++;
    if (Aval <= M)
    {
      cout << count << "\n";
      break;
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}