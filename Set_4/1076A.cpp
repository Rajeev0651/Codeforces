//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, flag = 0;
  cin >> N;
  string S;
  cin >> S;
  S.push_back('Z');
  string ans;
  for (int i = 0; i < N; i++)
  {
    if (S[i + 1] < S[i] && flag == 0)
    {
      flag = 1;
      continue;
    }
    else
      ans += S[i];
  }
  if (flag == 0)
    ans.pop_back();
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}