//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N;
  cin >> N;
  ll A[N], B[N];
  set<ll> S1, S2;
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    S1.insert(A[i]);
  }
  FOR(i, 0, N - 1)
  {
    cin >> B[i];
    S2.insert(B[i]);
  }
  ll ans = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      ll val = A[i] ^ B[j];
      if (S1.find(val) != S1.end() || S2.find(val) != S2.end())
        ans++;
    }
  }
  if (ans % 2 == 0)
    cout << "Karen\n";
  else
    cout << "Koyomi\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}