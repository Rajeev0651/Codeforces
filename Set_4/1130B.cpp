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
  ll A[N * 2];
  ll hash1[N + 1], hash2[N + 1];
  memset(hash1, 0, sizeof(hash1));
  memset(hash2, 0, sizeof(hash2));
  hash1[0] = 1;
  hash2[0] = 1;
  for (int i = 0; i < N * 2; i++)
  {
    cin >> A[i];
    if (hash1[A[i]] == 0)
      hash1[A[i]] = i + 1;
    else
      hash2[A[i]] = i + 1;
  }
  ll ans = 0;
  for (int i = 1; i <= N; i++)
  {
    ans += abs(hash1[i] - hash1[i - 1]);
  }
  for (int i = 1; i <= N; i++)
  {
    ans += abs(hash2[i] - hash2[i - 1]);
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}