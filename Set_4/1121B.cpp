//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N;
  cin >> N;
  map<int, int> mp;
  int A[N];
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      int val = A[i] + A[j];
      if (mp.find(val) == mp.end())
        mp[val] = 1;
      else
        mp[val]++;
    }
  }
  int ans = 0;
  for (auto i = mp.begin(); i != mp.end(); i++)
  {
    ans = max(ans, i->second);
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}