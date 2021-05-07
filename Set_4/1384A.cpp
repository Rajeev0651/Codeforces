//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N;
  cin >> N;
  int A[N + 1];
  FOR(i, 0, N - 1)
  cin >> A[i];
  vector<string> S;
  string p;
  char c = 'a';
  for (int i = 0; i < A[0]; i++)
  {
    p += c++;
    if (c > 'z')
      c = 'a';
  }
  S.push_back(p);
  for (int i = 0; i < N; i++)
  {
    if (A[i] < A[i + 1])
    {
      char x = S.back()[S.back().length() - 1];
      int len = A[i + 1] - A[i];
      string p;
      for (char i = x + 1;; i++)
      {
        p += i;
        len--;
        if (len == 0)
          break;
      }
      S.push_back(S.back() + p);
    }
    else
      S.push_back(S.back());
  }
  for (auto &i : S)
    cout << i << "\n";
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