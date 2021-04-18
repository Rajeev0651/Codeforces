//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i < b; i++)

void solve()
{
  int N, ans = 0;
  cin >> N;
  string S = to_string(N);
  int k = S[0] - '0' - 1;
  int slen = S.length();
  // bool same = S.find_first_not_of(S[0]) == string::npos;
  // if (same)
  //   ans++;
  ans += k;
  string p(slen, S[0]);
  int q = stoi(p);
  if (q <= N)
    ans++;
  for (int i = 1; i <= slen - 1; i++)
  {
    ans += 9;
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