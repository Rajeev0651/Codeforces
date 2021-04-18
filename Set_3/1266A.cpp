//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i < b; i++)

void solve()
{
  string S, ans = "red";
  int flag1 = 0, sum = 0, flag2 = 0;
  cin >> S;
  int len = S.length();
  bool k = S.find('0') != string ::npos;
  FOR(i, 0, len)
  {
    int k = S[i] - '0';
    if (k == 0)
      flag1++;
    if (k % 2 == 0)
      flag2++;
    sum += k;
  }
  if (flag2 >= 2 && flag1 >= 1 && sum % 3 == 0)
  {
    cout << ans << "\n";
  }
  else
    cout << "cyan\n";
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