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
  int len = S.length();
  int acount = 0;
  acount = count(S.begin(), S.end(), 'a');
  if (len + acount % 2 == 1)
  {
    cout << ":(\n";
  }
  else
  {
    int k = (len + acount) / 2;
    string a = S.substr(0, k);
    string p = a;
    string b = S.substr(k, len - k);
    a.erase(remove(a.begin(), a.end(), 'a'), a.end());
    if (a.compare(b) == 0)
      cout << p << "\n";
    else
      cout << ":(\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}