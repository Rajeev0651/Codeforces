//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  string S;
  cin >> S;
  int ans = 200005;
  int left = 0, right = 0;
  int a = 0, b = 0, c = 0;
  int r = -1;
  int len = S.length();
  while ((left <= right) && (right < len))
  {
    // cout << left << " " << right << "\n";
    // cout << "a: " << a << " "
    //      << "b: " << b << " "
    //      << "c: " << c << "\n";
    if (right != r)
    {
      if (S[right] == '1')
        a++;
      else if (S[right] == '2')
        b++;
      else
        c++;
    }
    r = right;
    if (a >= 1 && b >= 1 && c >= 1)
    {
      ans = min(ans, right - left + 1);
    }
    if (S[left] == '1' && a > 1 && ((left + 1) < right))
    {
      a--;
      left++;
    }
    else if (S[left] == '2' && b > 1 && ((left + 1) < right))
    {
      b--;
      left++;
    }
    else if (S[left] == '3' && c > 1 && ((left + 1) < right))
    {
      c--;
      left++;
    }
    else
      right++;
  }
  if (ans > 200000)
    ans = 0;
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