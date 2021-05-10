//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  string A, B;
  cin >> A >> B;
  int lena = A.length(), lenb = B.length();
  int index = 0, count = 0;
  for (int i = 0; i < lena; i++)
  {
    for (int j = index; j < lenb; j++)
    {
      if (A[i] == B[j])
      {
        count++;
        index++;
        break;
      }
      if (i == 0)
      {
        cout << "NO\n";
        return;
      }
      if (B[j] != A[i - 1])
      {
        cout << "NO\n";
        return;
      }
      index++;
    }
  }
  for (int i = index; i < lenb; i++)
  {
    if (B[i] != A[lena - 1])
    {
      cout << "NO\n";
      return;
    }
  }
  if (count == lena)
    cout << "YES\n";
  else
    cout << "NO\n";
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