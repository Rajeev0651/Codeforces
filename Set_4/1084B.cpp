//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, S, mnval;
  cin >> N >> S;
  ll A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  mnval = *min_element(A, A + N);
  ll left = 0;
  for (int i = 0; i < N; i++)
  {
    if (A[i] > mnval)
    {
      left += A[i] - mnval;
    }
  }
  if (left >= S)
  {
    cout << mnval << "\n";
  }
  else
  {
    S -= left;
    ll val = S / (ll)N;
    if (S % N != 0)
      val++;
    mnval -= val;
    cout << max((ll)-1, mnval);
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}