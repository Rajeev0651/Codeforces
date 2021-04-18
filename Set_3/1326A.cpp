#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int N, ans = -1;
    cin >> N;
    if (N == 1)
      cout << "-1";
    else
    {
      vector<char> S(N - 1, '3');
      S.insert(S.begin(), '2');
      for (int i = 0; i < N; i++)
      {
        cout << S[i];
      }
    }
    cout << "\n";
  }
  return 0;
}