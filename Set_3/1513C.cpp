#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    string S;
    int n, ans, freq = 0;
    cin >> S >> n;
    int k = -1, len = S.length();
    while (n > 0)
    {
      freq = 0;
      k = -1;
      for (int i = 0; i < len; i++)
      {
        int x = S[i] - '0';
        k = max(k, x);
      }
      string q = to_string(k);
      char o;
      //cout << q << "\n";
      for (int i = 0; i < len; i++)
      {
        o = q[0];
        if (S[i] == o)
          freq++;
      }
      //cout << freq << "\n";
      int jump = 10 - k;
      n = n - jump;
      if (n < 0)
      {
        ans = len;
        break;
      }
      else if (n == 0)
      {
        ans = len + freq;
        break;
      }
      else
      {
        len += freq;
      }
      S.resize(len);
      len = S.length();
      replace(S.begin(), S.end(), o, '1');
      for (int i = 1; i <= freq; i++)
        S += '0';
      for (int i = 0; i < len; i++)
      {
        if (S[i] != o)
        {
          int f = S[i] - '0' + jump;
          string l = to_string(f);
          S[i] = l[0];
        }
      }
      cout << S << " " << n << "\n";
    }
    cout << ans << "\n";
  }
  return 0;
}