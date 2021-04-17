#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int N, a = 0, b = 0;
    string S, ans = "YES";
    int count = 0;
    cin >> N;
    int pre[N], pos[N];
    memset(pre, 0, sizeof(pre));
    memset(pos, 0, sizeof(pos));
    cin >> S;
    pre[0] = S[0] == 'T' ? 1 : 0;
    pos[N - 1] = S[N - 1] == 'T' ? 1 : 0;
    for (int i = 0; i < N; i++)
    {
      if (S[i] == 'T')
        a++;
      else
        b++;
    }
    if ((2 * b) != a)
      ans = "NO";
    for (int i = 1; i < N; i++)
    {
      pre[i] = (S[i] == 'T' ? 1 : 0) + pre[i - 1];
    }
    for (int i = N - 2; i >= 0; i--)
    {
      pos[i] = (S[i] == 'T' ? 1 : 0) + pos[i + 1];
    }
    if (S[0] == 'M' || S[N - 1] == 'M')
      ans = "NO";
    for (int i = 1; i < N - 1; i++)
    {
      if (S[i] == 'M')
      {
        count++;
        if (pre[i - 1] < count || pos[i + 1] < count)
        {
          ans = "NO";
          break;
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}