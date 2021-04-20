//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i < b; i++)

void solve()
{
  int N, x = 0;
  cin >> N;
  int A[N], B[N];
  vector<int> diff;
  FOR(i, 0, N)
  cin >> A[i];
  FOR(i, 0, N)
  cin >> B[i];
  FOR(i, 0, N)
  {
    diff.push_back(B[i] - A[i]);
  }
  int a = -1, b = -1;
  FOR(i, 0, N)
  {
    if (diff[i] != 0)
    {
      a = i;
      break;
    }
  }
  for (int i = N - 1; i >= 0; i--)
  {
    if (diff[i] != 0)
    {
      b = i;
      break;
    }
  }
  string ans = "YES";
  int q = diff[a];
  for (int i = a; i <= b; i++)
  {
    if (diff[i] != q || diff[i] < 0)
    {
      ans = "NO";
      break;
    }
  }
  cout << ans << "\n";
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