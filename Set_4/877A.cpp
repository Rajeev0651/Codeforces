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
  int a = 0, b = 0, c = 0, d = 0, e = 0, flag = 0;
  if (S.find("Danil") != string::npos)
  {
    flag++;
    if (S.find("Danil") == S.rfind("Danil"))
      a = 1;
  }
  if (S.find("Olya") != string::npos)
  {
    flag++;
    if (S.find("Olya") == S.rfind("Olya"))
      b = 1;
  }
  if (S.find("Slava") != string::npos)
  {
    flag++;
    if (S.find("Slava") == S.rfind("Slava"))
      c = 1;
  }
  if (S.find("Ann") != string::npos)
  {
    flag++;
    if (S.find("Ann") == S.rfind("Ann"))
      d = 1;
  }
  if (S.find("Nikita") != string::npos)
  {
    flag++;
    if (S.find("Nikita") == S.rfind("Nikita"))
      e = 1;
  }
  if ((a + b + c + d + e) == 1 && flag == 1)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}