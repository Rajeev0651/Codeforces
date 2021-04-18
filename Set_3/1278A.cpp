#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> A)
{
  int len = A.size();
  for (int i = 0; i < len; i++)
  {
    if (A[i] != 0)
      return false;
  }
  return true;
}
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    string S, H, ans = "NO";
    cin >> S >> H;
    int len = S.length();
    int len2 = H.length();
    if (len2 < len)
    {
      cout << ans << "\n";
      continue;
    }
    vector<int> hash(27, 0);
    for (int i = 0; i < len; i++)
    {
      hash[S[i] - 'a']++;
    }
    for (int i = 0; i < len; i++)
    {
      hash[H[i] - 'a']--;
    }
    if (check(hash))
    {
      ans = "YES";
    }
    for (int i = 1; i <= len2 - len; i++)
    {
      hash[H[i - 1] - 'a']++;
      hash[H[i + len - 1] - 'a']--;
      if (check(hash))
      {
        ans = "YES";
        break;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}