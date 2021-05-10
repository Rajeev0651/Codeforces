//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

bool comp(ll a, ll b)
{
  cout << a << " " << b << "\n";
  return ((a < b) && ((a % 2) != (b % 2)));
}
void solve()
{
  ll N;
  cin >> N;
  ll A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  sort(A, A + N, comp);
  for (ll i = 0; i < N; i++)
    cout << A[i] << " ";
  cout << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}