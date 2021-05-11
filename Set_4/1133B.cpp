//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, K;
  cin >> N >> K;
  int A[N];
  map<int, int> mp;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    A[i] %= K;
    if (mp.find(A[i]) != mp.end())
      mp[A[i]]++;
    else
      mp[A[i]] = 1;
  }
  int ans = 0;
  if (mp.find(0) != mp.end())
  {
    ans += (mp[0] / 2);
  }
  for (int i = 1; i <= (K / 2); i++)
  {
    int x = i;
    int y = K - x;
    int j = 0, k = 0;
    if (mp.find(x) != mp.end())
      j = mp[x];
    if (mp.find(y) != mp.end())
      k = mp[y];
    if (x == y)
    {
      ans += (mp[x] / 2);
      continue;
    }
    ans += min(j, k);
  }
  cout << ans * 2 << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}