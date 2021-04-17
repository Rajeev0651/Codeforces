#include <bits/stdc++.h>
using namespace std;
bool solve(long long int val)
{
  string S = to_string(val);
  int len = S.length();
  for (int i = 0; i < len; i++)
  {
    int k = S[i] - '0';
    if ((S[i] != '0') && (val % k) != 0)
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
    long long int N;
    cin >> N;
    for (long long int i = N; i <= N + 3000; i++)
    {
      bool ans = solve(i);
      if (ans == true)
      {
        cout << i << "\n";
        break;
      }
    }
  }
  return 0;
}