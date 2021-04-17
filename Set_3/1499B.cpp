#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    string S, ans = "YES";
    cin >> S;
    int a = -1, b = -1;
    a = S.find("11");
    b = S.rfind("00");
    if (a < b && a != -1 && b != -1)
      ans = "NO";
    cout << ans << "\n";
  }
  return 0;
}