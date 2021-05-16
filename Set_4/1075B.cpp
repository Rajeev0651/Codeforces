//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int n, m;
  cin >> n >> m;
  int A[n + m], B[n + m], ans[n + m];
  memset(ans, 0, sizeof(ans));
  vector<int> v;
  FOR(i, 0, n + m - 1)
  cin >> A[i];
  FOR(i, 0, n + m - 1)
  {
    cin >> B[i];
    if (B[i] == 1)
      v.push_back(i);
  }
  int left = 0, right = 0;
  int len = v.size();
  for (int i = 0; i < len; i++)
  {
    left = i;
    right = i + 1;
    if (right > len)
    {
      ans[v[i]] = n + m - v[i] - 1;
    }
    else
    {
      for (int j = v[i] + 1; j < v[i + 1]; j++)
      {
        if (abs(A[j] - v[i]) <= abs(A[j] - v[i + 1]))
        {
          ans[v[i]]++;
        }
      }
    }
  }
  for (int i = 0; i < n + m - 1; i++)
    cout << ans[i] << " ";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}