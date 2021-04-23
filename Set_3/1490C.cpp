//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

vector<ll> v;
void solve()
{
  ll N;
  cin >> N;
  string ans = "NO";
  ll left = 0, right = lower_bound(v.begin(), v.end(), N) - v.begin();
  while (left <= right)
  {
    ll sum = v[left] + v[right];
    if (sum == N)
    {
      ans = "YES";
      break;
    }
    else if (sum > N)
      right--;
    else if (sum < N)
      left++;
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  for (int i = 1; i <= 10000; i++)
  {
    v.push_back(pow(i, 3));
  }
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}