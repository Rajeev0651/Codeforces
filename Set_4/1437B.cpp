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
  string S, T;
  cin >> S;
  int count1 = 0, count2 = 0;
  for (int i = 0; i < N - 1; i++)
  {
    if (S[i] == '1' && S[i + 1] == '1')
      count1++;
    if (S[i] == '0' && S[i + 1] == '0')
      count2++;
  }
  cout << max(count1, count2) << "\n";
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