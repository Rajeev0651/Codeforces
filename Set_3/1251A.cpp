//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i < b; i++)

void solve()
{
  string S;
  set<char> rep, ans;
  cin >> S;
  int len = S.length();
  int freq[26];
  memset(freq, 0, sizeof(freq));
  FOR(i, 0, len)
  freq[S[i] - 'a']++;
  FOR(i, 0, len - 1)
  {
    if (S[i] == S[i + 1])
    {
      freq[S[i] - 'a'] -= 2;
      i++;
    }
  }
  FOR(i, 0, 26)
  {
    if (freq[i] != 0)
    {
      char c = i + 97;
      cout << c;
    }
  }
  cout << "\n";
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