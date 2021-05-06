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
  string S;
  cin >> S;
  ll A[N], count = 0;
  for (int i = 0; i < N; i++)
  {
    if (S[i] == '*')
    {
      A[count++] = i + 1;
    }
  }
  sort(A, A + count);
  ll val = A[count / 2];
  ll ans = 0, x = 1;
  for (int i = (count / 2) - 1; i >= 0; i--)
  {
    ans += (val - A[i] - x);
    x++;
  }
  x = 1;
  for (int i = (count / 2) + 1; i < count; i++)
  {
    ans += (A[i] - val - x);
    x++;
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